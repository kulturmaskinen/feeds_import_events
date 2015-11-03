<?php

/**
 * @file
 * feeds_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function feeds_import_events_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'arrangementer_import';
  $feeds_importer->config = array(
    'name' => 'arrangementer import',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsJSONPathParser',
      'config' => array(
        'context' => '$.*',
        'sources' => array(
          'jsonpath_parser:0' => 'html..li.0..p..child_nodes.value',
          'jsonpath_parser:1' => 'value',
          'jsonpath_parser:11' => 'html..li.0..p..child_nodes.span..href',
          'jsonpath_parser:12' => 'html..li.0..p..child_nodes.span..href',
          'jsonpath_parser:4' => 'html..li.1.child_nodes.value',
          'jsonpath_parser:5' => 'html..li.3.child_nodes.div.1.child_nodes.value',
          'jsonpath_parser:6' => 'html..li.3.child_nodes.div.2.child_nodes.value',
          'jsonpath_parser:7' => 'id',
          'jsonpath_parser:8' => 'html..li.3.child_nodes.value',
          'jsonpath_parser:9' => 'html..li.5.child_nodes.div..child_nodes.value',
          'jsonpath_parser:10' => 'html..li.5.child_nodes.value',
          'jsonpath_parser:13' => 'html..li.0.child_nodes.p..attributes.alt',
          'jsonpath_parser:14' => 'html..li.0.child_nodes.p..attributes.alt',
          'jsonpath_parser:15' => 'html..li.0..p..child_nodes.span..class',
        ),
        'debug' => array(
          'options' => array(
            'context' => 0,
            'jsonpath_parser:0' => 0,
            'jsonpath_parser:1' => 0,
            'jsonpath_parser:11' => 0,
            'jsonpath_parser:12' => 0,
            'jsonpath_parser:4' => 0,
            'jsonpath_parser:5' => 0,
            'jsonpath_parser:6' => 0,
            'jsonpath_parser:7' => 0,
            'jsonpath_parser:8' => 0,
            'jsonpath_parser:9' => 0,
            'jsonpath_parser:10' => 0,
            'jsonpath_parser:13' => 0,
            'jsonpath_parser:14' => 0,
            'jsonpath_parser:15' => 0,
          ),
        ),
        'allow_override' => 0,
        'convert_four_byte' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '15552000',
        'author' => '101',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'jsonpath_parser:0',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'jsonpath_parser:1',
            'target' => 'field_body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'jsonpath_parser:11',
            'target' => 'field_list_image:uri',
            'file_exists' => '1',
          ),
          3 => array(
            'source' => 'jsonpath_parser:12',
            'target' => 'field_title_image:uri',
            'file_exists' => '1',
          ),
          4 => array(
            'source' => 'jsonpath_parser:4',
            'target' => 'field_lead',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'jsonpath_parser:5',
            'target' => 'field_dato:start',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'jsonpath_parser:6',
            'target' => 'field_dato:end',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'jsonpath_parser:7',
            'target' => 'nid',
            'unique' => 1,
          ),
          8 => array(
            'source' => 'jsonpath_parser:8',
            'target' => 'field_info',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'jsonpath_parser:9',
            'target' => 'field_location:name_line',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'jsonpath_parser:10',
            'target' => 'field_location:thoroughfare',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'jsonpath_parser:13',
            'target' => 'field_tags',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          12 => array(
            'source' => 'jsonpath_parser:14',
            'target' => 'field_event_category',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          13 => array(
            'source' => 'Blank source 1',
            'target' => 'field_fra_kultunaut',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'jsonpath_parser:15',
            'target' => 'field_vis_mere',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'Blank source 2',
            'target' => 'field_location:country',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'events',
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '10800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['node'] = $feeds_importer;

  return $export;
}

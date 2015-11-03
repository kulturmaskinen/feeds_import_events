<?php

/**
 * @file
 * feeds_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function feeds_import_events_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'arrangementer_import-blank_source_1-default_value';
  $feeds_tamper->importer = 'arrangementer_import';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => '1',
    'only_if_empty' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set value or default value';

  $export[$feeds_tamper->id] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'arrangementer_import-blank_source_2-default_value';
  $feeds_tamper->importer = 'arrangementer_import';
  $feeds_tamper->source = 'Blank source 2';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'DK',
    'only_if_empty' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set value or default value';

  $export[$feeds_tamper->id] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'arrangementer_import-jsonpath_parser_0-default_value';
  $feeds_tamper->importer = 'arrangementer_import';
  $feeds_tamper->source = 'jsonpath_parser:0';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'Ingen title',
    'only_if_empty' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set value or default value';

  $export[$feeds_tamper->id] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'arrangementer_import-jsonpath_parser_1-find_replace_regex';
  $feeds_tamper->importer = 'arrangementer_import';
  $feeds_tamper->source = 'jsonpath_parser:1';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '(2015-(.*)\\n+(.*))',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace REGEX';

  $export[$feeds_tamper->id] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'arrangementer_import-jsonpath_parser_10-find_replace';
  $feeds_tamper->importer = 'arrangementer_import';
  $feeds_tamper->source = 'jsonpath_parser:10';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => ',',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';

  $export[$feeds_tamper->id] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'arrangementer_import-jsonpath_parser_11-find_replace_regex';
  $feeds_tamper->importer = 'arrangementer_import';
  $feeds_tamper->source = 'jsonpath_parser:11';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/([^\\/]+_)/',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace REGEX';

  $export[$feeds_tamper->id] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'arrangementer_import-jsonpath_parser_11-find_replace_trim';
  $feeds_tamper->importer = 'arrangementer_import';
  $feeds_tamper->source = 'jsonpath_parser:11';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '(\\?.*$)',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace REGEX';

  $export[$feeds_tamper->id] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'arrangementer_import-jsonpath_parser_12-find_replace_regex';
  $feeds_tamper->importer = 'arrangementer_import';
  $feeds_tamper->source = 'jsonpath_parser:12';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/([^\\/]+_)/',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace REGEX';

  $export[$feeds_tamper->id] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'arrangementer_import-jsonpath_parser_12-find_replace_trim';
  $feeds_tamper->importer = 'arrangementer_import';
  $feeds_tamper->source = 'jsonpath_parser:12';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '(\\?.*$)',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace trim';

  $export[$feeds_tamper->id] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'arrangementer_import-jsonpath_parser_14-find_replace_regex';
  $feeds_tamper->importer = 'arrangementer_import';
  $feeds_tamper->source = 'jsonpath_parser:14';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '(^(.+):\\s)',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace REGEX';

  $export[$feeds_tamper->id] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'arrangementer_import-jsonpath_parser_4-find_replace_regex';
  $feeds_tamper->importer = 'arrangementer_import';
  $feeds_tamper->source = 'jsonpath_parser:4';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '(^.\\s)',
    'replace' => '',
    'limit' => '',
    'real_limit' => -1,
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace REGEX';

  $export[$feeds_tamper->id] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'arrangementer_import-jsonpath_parser_4-trim';
  $feeds_tamper->importer = 'arrangementer_import';
  $feeds_tamper->source = 'jsonpath_parser:4';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'ltrim',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Trim';

  $export[$feeds_tamper->id] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'arrangementer_import-jsonpath_parser_4-truncate_text';
  $feeds_tamper->importer = 'arrangementer_import';
  $feeds_tamper->source = 'jsonpath_parser:4';
  $feeds_tamper->plugin_id = 'truncate_text';
  $feeds_tamper->settings = array(
    'num_char' => '250',
    'ellipses' => 1,
    'wordsafe' => 0,
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Truncate';

  $export[$feeds_tamper->id] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'arrangementer_import-jsonpath_parser_5-strtotime';
  $feeds_tamper->importer = 'arrangementer_import';
  $feeds_tamper->source = 'jsonpath_parser:5';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';

  $export[$feeds_tamper->id] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'arrangementer_import-jsonpath_parser_5-timetodate';
  $feeds_tamper->importer = 'arrangementer_import';
  $feeds_tamper->source = 'jsonpath_parser:5';
  $feeds_tamper->plugin_id = 'timetodate';
  $feeds_tamper->settings = array(
    'date_format' => 'D. \\d\\. d. M. Y \\k\\l. H:i',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Unix timestamp to Date';

  $export[$feeds_tamper->id] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'arrangementer_import-jsonpath_parser_6-strtotime';
  $feeds_tamper->importer = 'arrangementer_import';
  $feeds_tamper->source = 'jsonpath_parser:6';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';

  $export[$feeds_tamper->id] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'arrangementer_import-jsonpath_parser_6-timetodate';
  $feeds_tamper->importer = 'arrangementer_import';
  $feeds_tamper->source = 'jsonpath_parser:6';
  $feeds_tamper->plugin_id = 'timetodate';
  $feeds_tamper->settings = array(
    'date_format' => 'D. \\d\\. d. M. Y \\k\\l. H:i',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Unix timestamp to Date';

  $export[$feeds_tamper->id] = $feeds_tamper;
  
  return $export;
}

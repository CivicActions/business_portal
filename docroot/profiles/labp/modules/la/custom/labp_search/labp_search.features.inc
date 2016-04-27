<?php
/**
 * @file
 * labp_search.features.inc
 */

/**
 * Implements hook_default_search_api_server().
 */
function labp_search_default_search_api_server() {
  $items = array();
  $items['acquia_search'] = entity_import('search_api_server', '{
    "name" : "Acquia Search",
    "machine_name" : "acquia_search",
    "description" : "",
    "class" : "acquia_search_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "useast1-c1.acquia-search.com",
      "port" : "80",
      "path" : "\\/solr\\/GHIM-52329",
      "edismax" : 0,
      "modify_acquia_connection" : 0,
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO",
      "log_query" : 0,
      "log_response" : 0,
      "autocorrect_spell" : 0,
      "autocorrect_suggest_words" : 0
    },
    "enabled" : "1"
  }');
  return $items;
}

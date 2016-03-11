<?php
/**
 * @file
 * sbp_page.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function sbp_page_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_sbp_basic_page';
  $strongarm->value = 0;
  $export['comment_anonymous_sbp_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_sbp_basic_page';
  $strongarm->value = '1';
  $export['comment_sbp_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_sbp_basic_page';
  $strongarm->value = 1;
  $export['comment_default_mode_sbp_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_sbp_basic_page';
  $strongarm->value = '50';
  $export['comment_default_per_page_sbp_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_sbp_basic_page';
  $strongarm->value = 1;
  $export['comment_form_location_sbp_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_sbp_basic_page';
  $strongarm->value = '1';
  $export['comment_preview_sbp_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_sbp_basic_page';
  $strongarm->value = 1;
  $export['comment_subject_field_sbp_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_sbp_basic_page';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_sbp_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_sbp_basic_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_sbp_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_sbp_basic_page';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_sbp_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_sbp_basic_page';
  $strongarm->value = '2';
  $export['node_preview_sbp_basic_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_sbp_basic_page';
  $strongarm->value = 0;
  $export['node_submitted_sbp_basic_page'] = $strongarm;

  return $export;
}

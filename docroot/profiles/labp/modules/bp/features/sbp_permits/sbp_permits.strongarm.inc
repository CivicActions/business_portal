<?php
/**
 * @file
 * sbp_permits.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function sbp_permits_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_sbp_permit';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_sbp_permit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_sbp_permit';
  $strongarm->value = 0;
  $export['comment_anonymous_sbp_permit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_sbp_permit';
  $strongarm->value = 1;
  $export['comment_default_mode_sbp_permit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_sbp_permit';
  $strongarm->value = '50';
  $export['comment_default_per_page_sbp_permit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_sbp_permit';
  $strongarm->value = 1;
  $export['comment_form_location_sbp_permit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_sbp_permit';
  $strongarm->value = '1';
  $export['comment_preview_sbp_permit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_sbp_permit';
  $strongarm->value = '2';
  $export['comment_sbp_permit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_sbp_permit';
  $strongarm->value = 1;
  $export['comment_subject_field_sbp_permit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_sbp_permit';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_sbp_permit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_sbp_permit';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_sbp_permit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_sbp_permit';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_sbp_permit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_sbp_permit';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_sbp_permit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_permit';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_permit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_sbp_permit';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_sbp_permit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'metatag_enable_node__sbp_permit';
  $strongarm->value = TRUE;
  $export['metatag_enable_node__sbp_permit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_permit';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_permit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_sbp_permit';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_sbp_permit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_permit';
  $strongarm->value = '1';
  $export['node_preview_permit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_sbp_permit';
  $strongarm->value = '1';
  $export['node_preview_sbp_permit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_permit';
  $strongarm->value = 0;
  $export['node_submitted_permit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_sbp_permit';
  $strongarm->value = 1;
  $export['node_submitted_sbp_permit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_sbp_permit';
  $strongarm->value = array(
    'status' => 0,
    'view modes' => array(),
  );
  $export['panelizer_defaults_node_sbp_permit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_sbp_permit';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_sbp_permit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'webform_node_sbp_permit';
  $strongarm->value = 0;
  $export['webform_node_sbp_permit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_sbp_permit';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_sbp_permit'] = $strongarm;

  return $export;
}
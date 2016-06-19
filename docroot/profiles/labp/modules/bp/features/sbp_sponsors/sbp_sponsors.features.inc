<?php
/**
 * @file
 * sbp_sponsors.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sbp_sponsors_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function sbp_sponsors_node_info() {
  $items = array(
    'business_portal_sponsors' => array(
      'name' => t('Business Portal Sponsors'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Sponsor Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

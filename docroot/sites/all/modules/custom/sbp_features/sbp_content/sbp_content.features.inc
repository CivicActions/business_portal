<?php
/**
 * @file
 * sbp_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sbp_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function sbp_content_node_info() {
  $items = array(
    'sbp_content' => array(
      'name' => t('Business Portal Content'),
      'base' => 'node_content',
      'description' => t('Used for Start, Grow, and Manage business pages.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

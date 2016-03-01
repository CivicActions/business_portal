<?php
/**
 * @file
 * sbp_starter_kit.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sbp_starter_kit_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function sbp_starter_kit_node_info() {
  $items = array(
    'sbp_starter_kit' => array(
      'name' => t('SBP Starter Kit'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

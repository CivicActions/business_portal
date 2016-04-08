<?php
/**
 * @file
 * sbp_panels.fieldable_panels_pane_type.inc
 */

/**
 * Implements hook_default_fieldable_panels_pane_type().
 */
function sbp_panels_default_fieldable_panels_pane_type() {
  $export = array();

  $fieldable_panels_pane_type = new stdClass();
  $fieldable_panels_pane_type->disabled = FALSE; /* Edit this to true to make a default fieldable_panels_pane_type disabled initially */
  $fieldable_panels_pane_type->api_version = 1;
  $fieldable_panels_pane_type->name = 'four_column_cta';
  $fieldable_panels_pane_type->title = 'Four Column CTA';
  $fieldable_panels_pane_type->description = '';
  $export['four_column_cta'] = $fieldable_panels_pane_type;

  return $export;
}

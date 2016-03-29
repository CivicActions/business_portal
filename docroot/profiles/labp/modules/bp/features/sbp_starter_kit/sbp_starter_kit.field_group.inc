<?php
/**
 * @file
 * sbp_starter_kit.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function sbp_starter_kit_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_whats_inside|node|sbp_starter_kit|form';
  $field_group->group_name = 'group_whats_inside';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'sbp_starter_kit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'What\'s Inside',
    'weight' => '5',
    'children' => array(
      0 => 'field_related_permits',
      1 => 'field_guides',
      2 => 'field_related_documents',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-whats-inside field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_whats_inside|node|sbp_starter_kit|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('What\'s Inside');

  return $field_groups;
}
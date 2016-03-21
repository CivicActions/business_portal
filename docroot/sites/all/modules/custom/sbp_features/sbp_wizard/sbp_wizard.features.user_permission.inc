<?php
/**
 * @file
 * sbp_wizard.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function sbp_wizard_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete terms in business_portal_wizard_sections'.
  $permissions['delete terms in business_portal_wizard_sections'] = array(
    'name' => 'delete terms in business_portal_wizard_sections',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in business_portal_wizard_sections'.
  $permissions['edit terms in business_portal_wizard_sections'] = array(
    'name' => 'edit terms in business_portal_wizard_sections',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}

<?php
/**
 * @file
 *
 * An example Install profile that uses Profiler. To create your own Install 
 * profile, copy the directory that this file resides in, and rename all files 
 * and directories, replacing profiler_example with the machine name of your 
 * install profile. Then do a find and replace in this file to replace all 
 * instances of profiler_example with the machine name of your profile. Edit the 
 * renamed profiler_example.info file to your taste, and presto-change-o,
 * you've got yourself an install profile!
 */

!function_exists('profiler_v2') ? require_once('profiles/sbp/libraries/profiler/profiler.inc') : exit('no profiler');
profiler_v2('sbp');

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
if (!function_exists("system_form_install_configure_form_alter")) {
  function system_form_install_configure_form_alter(&$form, $form_state) {
    $form['site_information']['site_name']['#default_value'] = 'sbp';
  }
}

/**
 * Implements hook_form_alter().
 *
 * Select the current install profile by default.
 */
if (!function_exists("system_form_install_select_profile_form_alter")) {
  function system_form_install_select_profile_form_alter(&$form, $form_state) {
    foreach ($form['profile'] as $key => $element) {
      $form['profile'][$key]['#value'] = 'sbp';
    }
  }
}

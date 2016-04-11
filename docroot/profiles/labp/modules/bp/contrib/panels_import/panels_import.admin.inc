<?php

/**
 * @file
 * Administrative page callbacks for the panels_import module.
 */

/**
 * Form builder to configure panels_import behaviors.
 *
 * @ingroup forms
 */
function panels_import_settings() {

  $form['panels_import_directory'] = array(
    '#type' => 'textfield',
    '#title' => t('Import directory'),
    '#default_value' => variable_get('panels_import_directory', 'sites/all/imports'),
    '#description' => t('This directory holds all of your import files.'),
    '#required' => TRUE,
  );

  $form['#validate'][]  = 'panels_import_settings_validate';

  return system_settings_form($form);
}

/**
 * Form validation handler for panels_import_settings().
 *
 * @param $form
 * @param $form_state
 */
function panels_import_settings_validate($form, &$form_state) {
  if (!is_dir($form_state['values']['panels_import_directory'])) {
    form_set_error('panels_import_directory', t('That directory does not exist, please create it.'));
  }
}
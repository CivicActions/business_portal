<?php
/**
 * @file
 * Form for address lookup.
 */

/**
 * Returns the render array for the form.
 */
function labp_address_wizard_address_input($form, &$form_state) {
  $form['streetAddress'] = array(
    '#type' => 'textfield',
    '#title' => t('Enter an address or intersection.'),
    '#required' => TRUE,
    '#default_value' => "1000 Sunset Blvd",
    '#description' => '"14410 Sylvan St" or "Sunset Blvd / Vermont Ave" ',
    '#size' => 20,
    '#maxlength' => 20,
  );
  $form['lookup'] = array(
    '#type' => 'item',
    '#markup' => 'Lookup',
    '#id' => 'form-address-lookup',
  );
  $form['#attributes'] = array('onsubmit' => 'return false');
  return $form;
}

/**
 * Validates the form.
 */
function labp_address_wizard_address_input_validate($form, &$form_state) {
}

/**
 * Add a submit handler/function to the form.
 *
 * This will add a completion message to the screen when the
 * form successfully processes
 */
function labp_address_wizard_address_input_submit($form, &$form_state) {
}

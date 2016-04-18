<?php
/**
 * @file
 * Form for address lookup.
 */

/**
 * Address input form.
function labp_address_wizard_address_input($form, &$form_state) {
  $form['box'] = array(
    '#type' => 'markup',
    '#prefix' => '<div id="box">',
    '#suffix' => '</div>',
    '#markup' => '<h1>Initial markup for box</h1>',
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#ajax' => array(
      'callback' => 'ajax_example_submit_driven_callback',
      'wrapper' => 'box',
    ),
    '#value' => t('Submit'),
  );

  return $form;
}
 */

function ajax_example_submit_driven_callback($form, $form_state) {
  // In most cases, it is recomended that you put this logic in form generation
  // rather than the callback. Submit driven forms are an exception, because
  // you may not want to return the form at all.
  $element = $form['box'];
  $element['#markup'] = "Clicked submit ({$form_state['values']['op']}): " . date('c');
  
  return $element;
}

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
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Submit',
  );
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
  $address = $form['streetAddress']['#value'];
  $address_result = la_neighborhoodinfo_callback($address);
  return $form;
}

/**
 * Neighborhood Info Callback
 * Passes address to Neighborhood Info and returns page content
 * 
 * @param type $address
 * @return type
 */
function la_neighborhoodinfo_callback($address){
  $base_url = 'http://neighborhoodinfo.lacity.org/index.cfm';
  $data = array(
    'fuseaction' => 'processAddress',
    'streetAddress' => $address
  );
  $query = '?' . http_build_query($data);
  $path = $base_url . $query;
  $result = file_get_contents($path);
  $inLA = la_neighborhoodinfo_check($result);

  return $inLA;
}


function la_neighborhoodinfo_check($result){  
  if(strpos( $result , '<div id="resultBox">')){
    return TRUE;
  }
  else {
    return FALSE;
  }
}
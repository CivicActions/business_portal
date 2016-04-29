<?php

function sbp_wizard_email_form() {
  $form['intro'] = array(
    '#markup' => t('Use this form to send a message to an e-mail address. No spamming!'),
  );
  $form['emailResults'] = array(
    '#type' => 'textfield',
    '#title' => t('E-mail address of recipeint'),
    '#required' => TRUE,
    '#id' => 'wizard-results-submit'
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Send'),
    '#id' => 'wizard-results-submit'
  );

  return $form;
}

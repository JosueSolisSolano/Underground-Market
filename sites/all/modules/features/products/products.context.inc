<?php
/**
 * @file
 * products.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function products_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'navigation_block';
  $context->description = 'navigation block';
  $context->tag = 'block';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('block');
  t('navigation block');
  $export['navigation_block'] = $context;

  return $export;
}

<?php
/**
 * @file
 * products.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function products_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|product|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'product';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|product|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function products_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|product|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'product';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'field_image',
      ),
      'right' => array(
        2 => 'field_price',
        3 => 'field_size',
        4 => 'field_color',
        5 => 'field_gender',
        6 => 'field_add_to_cart',
        7 => 'field_categories',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'field_image' => 'left',
      'field_price' => 'right',
      'field_size' => 'right',
      'field_color' => 'right',
      'field_gender' => 'right',
      'field_add_to_cart' => 'right',
      'field_categories' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|product|default'] = $ds_layout;

  return $export;
}

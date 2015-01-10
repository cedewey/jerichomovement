<?php
/**
 * @file
 * atom_wysiwyg_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function atom_wysiwyg_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_fallback_format';
  $strongarm->value = 'plain_text';
  $export['filter_fallback_format'] = $strongarm;

  return $export;
}

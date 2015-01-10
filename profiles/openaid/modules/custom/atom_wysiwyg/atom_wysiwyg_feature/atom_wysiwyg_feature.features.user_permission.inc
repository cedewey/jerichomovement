<?php
/**
 * @file
 * atom_wysiwyg_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function atom_wysiwyg_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'content editor' => 'content editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'filter',
  );

  return $permissions;
}

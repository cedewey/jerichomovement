<?php
/**
 * @file
 * openaid_base_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function openaid_base_feature_user_default_roles() {
  $roles = array();

  // Exported role: content editor.
  $roles['content editor'] = array(
    'name' => 'content editor',
    'weight' => 2,
  );

  return $roles;
}

<?php
/**
 * @file
 * default_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function default_roles_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}

<?php
/**
 * @file
 * Class for psit migration.
 */

/**
 * Migration class for PSIT.
 *
 * Registers new Wordpress classes.
 */
class PsitMigrateWordpressBlog extends WordPressBlog {

  /**
   * Register migration classes.
   *
   * @return array
   *   An array of migration classes.
   */
  public function migrationClasses() {
    $classes = parent::migrationClasses();
    $classes['WordPressPage'] = 'PsitMigrateWordpressPageEntry';
    $classes['WordPressEvent'] = 'PsitMigrateWordpressEventEntry';
    $classes['WordPressPost'] = 'PsitMigrateWordpressPostEntry';

    return $classes;
  }

}

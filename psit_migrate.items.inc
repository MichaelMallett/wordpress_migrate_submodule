<?php
/**
 * @file
 * Item classes for Psit Migration.
 */

/**
 * Class PSITWordpressPageEntry.
 *
 * Extension of WordPressPage to run additional content processing.
 */
class PsitMigrateWordpressPageEntry extends DofMigrateWordpressItemMigration {

  /**
   * {@inheritdoc}
   */
  public function __construct(array $arguments = []) {
    $arguments['bundle'] = $arguments['page_type'];
    $arguments['post_type'] = 'page';
    parent::__construct($arguments);
  }

}

/**
 * Class PSITWordpressEventEntry.
 *
 * Extension of WordPressPage to run additional content processing.
 */
class PsitMigrateWordpressEventEntry extends DofMigrateWordpressItemMigration {

  /**
   * {@inheritdoc}
   */
  public function __construct(array $arguments = []) {
    $arguments['bundle'] = $arguments['page_type'];
    $arguments['post_type'] = 'mc-event';
    parent::__construct($arguments);
  }

}

/**
 * Class PSITWordpressPostEntry.
 *
 * Extension of WordPressPage to run additional content processing.
 */
class PsitMigrateWordpressPostEntry extends DofMigrateWordpressItemMigration {

  /**
   * {@inheritdoc}
   */
  public function __construct(array $arguments = []) {
    $arguments['bundle'] = $arguments['page_type'];
    $arguments['post_type'] = 'post';
    parent::__construct($arguments);
  }

}

<?php

namespace Rector\PHPUnit\Tests\Rector\GetMockRector\Fixture;

final class MyGetMockTest extends \PHPUnit\Framework\TestCase
{
    public function test()
    {
        $firstMock = $this->getMock('SomeClass');
    }
}

?>
-----
<?php

namespace Rector\PHPUnit\Tests\Rector\GetMockRector\Fixture;

final class MyGetMockTest extends \PHPUnit\Framework\TestCase
{
    public function test()
    {
        $firstMock = $this->createMock('SomeClass');
    }
}

?>

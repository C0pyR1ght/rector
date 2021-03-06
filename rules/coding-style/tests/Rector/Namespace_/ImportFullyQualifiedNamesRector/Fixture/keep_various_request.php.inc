<?php

namespace Rector\CodingStyle\Tests\Rector\Namespace_\ImportFullyQualifiedNamesRector\Source;

final class ResponseFactory
{
    public function collection(): Response
    {
        return new Response();
    }

    public function noContent(): \Symfony\Component\HttpFoundation\Response
    {
        return new \Symfony\Component\HttpFoundation\Response('', 204);
    }

    public function ok(): \Symfony\Component\HttpFoundation\Response
    {
        return new \Symfony\Component\HttpFoundation\Response('', 200);
    }
}

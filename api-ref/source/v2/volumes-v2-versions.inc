.. -*- rst -*-

API versions
============




List API versions
~~~~~~~~~~~~~~~~~

.. rest_method::  GET /

Lists information for all Block Storage API versions.


Normal response codes: 200, 300


Request
-------


Response Example
----------------

.. literalinclude:: ./samples/versions-response.json
   :language: javascript




Show API v2 details
~~~~~~~~~~~~~~~~~~~

.. rest_method::  GET /v2

Shows details for Block Storage API v2.


Normal response codes: 200


Request
-------



Response Parameters
-------------------

.. rest_parameters:: parameters.yaml

   - location: location



Response Example
----------------

.. literalinclude:: ./samples/version-v2-show-response.json
   :language: javascript



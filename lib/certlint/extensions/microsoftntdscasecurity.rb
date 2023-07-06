#!/usr/bin/ruby -Eutf-8:utf-8
# encoding: UTF-8
# Copyright 2023 Sectigo Limited. or its affiliates. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License"). You may not
# use this file except in compliance with the License. A copy of the License
# is located at
#
#   https://www.apache.org/licenses/LICENSE-2.0
#
# or in the "license" file accompanying this file. This file is distributed on
# an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
# express or implied. See the License for the specific language governing
# permissions and limitations under the License.
require_relative 'asn1ext'

module CertLint
class ASN1Ext
  class MicrosoftNTDSCASecurity < ASN1Ext
    @pdu = :GeneralNames
    @critical_req = false
  end
end
end

CertLint::CertExtLint.register_handler('1.3.6.1.4.1.311.25.2', CertLint::ASN1Ext::MicrosoftNTDSCASecurity)

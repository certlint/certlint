#!/usr/bin/ruby -Eutf-8:utf-8
# encoding: UTF-8

require 'enc/encdb'
require 'enc/trans/transdb'
require 'certlint'

def runcablint(raw)
  m2 = []
  begin
    m = CertLint::CABLint.lint(raw)
    m.each do |msg|
      begin
        m2 << msg
      rescue Encoding::UndefinedConversionError
        m2 << "F: Encoding::UndefinedConversionError"
      end
    end
  rescue => e
    m2 << "F: #{e} Exception"
  end
  return m2
end

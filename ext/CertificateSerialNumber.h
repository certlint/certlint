/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "asn1/rfc5280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#ifndef	_CertificateSerialNumber_H_
#define	_CertificateSerialNumber_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CertificateSerialNumber */
typedef INTEGER_t	 CertificateSerialNumber_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CertificateSerialNumber;
asn_struct_free_f CertificateSerialNumber_free;
asn_struct_print_f CertificateSerialNumber_print;
asn_constr_check_f CertificateSerialNumber_constraint;
ber_type_decoder_f CertificateSerialNumber_decode_ber;
der_type_encoder_f CertificateSerialNumber_encode_der;
xer_type_decoder_f CertificateSerialNumber_decode_xer;
xer_type_encoder_f CertificateSerialNumber_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _CertificateSerialNumber_H_ */
#include <asn_internal.h>

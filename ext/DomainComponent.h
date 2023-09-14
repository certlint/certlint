/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "asn1/rfc5280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#ifndef	_DomainComponent_H_
#define	_DomainComponent_H_


#include <asn_application.h>

/* Including external dependencies */
#include <IA5String.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DomainComponent */
typedef IA5String_t	 DomainComponent_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DomainComponent;
asn_struct_free_f DomainComponent_free;
asn_struct_print_f DomainComponent_print;
asn_constr_check_f DomainComponent_constraint;
ber_type_decoder_f DomainComponent_decode_ber;
der_type_encoder_f DomainComponent_encode_der;
xer_type_decoder_f DomainComponent_decode_xer;
xer_type_encoder_f DomainComponent_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _DomainComponent_H_ */
#include <asn_internal.h>

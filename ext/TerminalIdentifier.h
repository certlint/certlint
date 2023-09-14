/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "asn1/rfc5280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#ifndef	_TerminalIdentifier_H_
#define	_TerminalIdentifier_H_


#include <asn_application.h>

/* Including external dependencies */
#include <PrintableString.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TerminalIdentifier */
typedef PrintableString_t	 TerminalIdentifier_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TerminalIdentifier;
asn_struct_free_f TerminalIdentifier_free;
asn_struct_print_f TerminalIdentifier_print;
asn_constr_check_f TerminalIdentifier_constraint;
ber_type_decoder_f TerminalIdentifier_decode_ber;
der_type_encoder_f TerminalIdentifier_encode_der;
xer_type_decoder_f TerminalIdentifier_decode_xer;
xer_type_encoder_f TerminalIdentifier_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _TerminalIdentifier_H_ */
#include <asn_internal.h>

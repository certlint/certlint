/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "asn1/rfc5280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#include "UniqueIdentifier.h"

/*
 * This type is implemented using BIT_STRING,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_UniqueIdentifier_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (3 << 2))
};
asn_TYPE_descriptor_t asn_DEF_UniqueIdentifier = {
	"UniqueIdentifier",
	"UniqueIdentifier",
	&asn_OP_BIT_STRING,
	asn_DEF_UniqueIdentifier_tags_1,
	sizeof(asn_DEF_UniqueIdentifier_tags_1)
		/sizeof(asn_DEF_UniqueIdentifier_tags_1[0]), /* 1 */
	asn_DEF_UniqueIdentifier_tags_1,	/* Same as above */
	sizeof(asn_DEF_UniqueIdentifier_tags_1)
		/sizeof(asn_DEF_UniqueIdentifier_tags_1[0]), /* 1 */
	{ 0, 0, BIT_STRING_constraint },
	0, 0,	/* No members */
	&asn_SPC_BIT_STRING_specs	/* Additional specs */
};


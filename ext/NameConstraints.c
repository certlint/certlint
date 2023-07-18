/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "asn1/rfc5280-PKIX1Implicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types -fcompound-names -no-gen-OER -no-gen-PER`
 */

#include "NameConstraints.h"

static asn_TYPE_member_t asn_MBR_NameConstraints_1[] = {
	{ ATF_POINTER, 2, offsetof(struct NameConstraints, permittedSubtrees),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GeneralSubtrees,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"permittedSubtrees"
		},
	{ ATF_POINTER, 1, offsetof(struct NameConstraints, excludedSubtrees),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GeneralSubtrees,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"excludedSubtrees"
		},
};
static const ber_tlv_tag_t asn_DEF_NameConstraints_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NameConstraints_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* permittedSubtrees */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* excludedSubtrees */
};
static asn_SEQUENCE_specifics_t asn_SPC_NameConstraints_specs_1 = {
	sizeof(struct NameConstraints),
	offsetof(struct NameConstraints, _asn_ctx),
	asn_MAP_NameConstraints_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NameConstraints = {
	"NameConstraints",
	"NameConstraints",
	&asn_OP_SEQUENCE,
	asn_DEF_NameConstraints_tags_1,
	sizeof(asn_DEF_NameConstraints_tags_1)
		/sizeof(asn_DEF_NameConstraints_tags_1[0]), /* 1 */
	asn_DEF_NameConstraints_tags_1,	/* Same as above */
	sizeof(asn_DEF_NameConstraints_tags_1)
		/sizeof(asn_DEF_NameConstraints_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NameConstraints_1,
	2,	/* Elements count */
	&asn_SPC_NameConstraints_specs_1	/* Additional specs */
};


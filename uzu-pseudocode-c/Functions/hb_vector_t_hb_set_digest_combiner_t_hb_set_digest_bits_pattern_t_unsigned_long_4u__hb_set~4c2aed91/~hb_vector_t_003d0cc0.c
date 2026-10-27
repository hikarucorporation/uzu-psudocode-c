// Function : ~hb_vector_t
// Namespace: hb_vector_t_hb_set_digest_combiner_t_hb_set_digest_bits_pattern_t_unsigned_long_4u__hb_set~4c2aed91
// Entry    : 003d0cc0
// Prototype: undefined ~hb_vector_t(hb_vector_t<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>,false> * this)
// Body     : 003d0cc0 - 003d0ce0


/* hb_vector_t<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 4u>,
   hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 0u>,
   hb_set_digest_bits_pattern_t<unsigned long, 9u> > >, false>::~hb_vector_t() */

void __thiscall
hb_vector_t<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>,false>
::~hb_vector_t(hb_vector_t<hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>,false>
               *this)

{
  if (*(int *)this != 0) {
    *(undefined4 *)(this + 4) = 0;
    free(*(void **)(this + 8));
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}



// Function : add_range
// Namespace: hb_set_digest_combiner_t_hb_set_digest_bits_pattern_t_unsigned_long_4u__hb_set_digest_comb~3dbc448f
// Entry    : 003d12a0
// Prototype: undefined8 add_range(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>> * this, uint param_1, uint param_2)
// Body     : 003d12a0 - 003d13cd


/* hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 4u>,
   hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned long, 0u>,
   hb_set_digest_bits_pattern_t<unsigned long, 9u> > >::add_range(unsigned int, unsigned int) */

undefined8 __thiscall
hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
::add_range(hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,4u>,hb_set_digest_combiner_t<hb_set_digest_bits_pattern_t<unsigned_long,0u>,hb_set_digest_bits_pattern_t<unsigned_long,9u>>>
            *this,uint param_1,uint param_2)

{
  undefined7 uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;
  bool bVar8;
  
  if (*(ulong *)this == 0xffffffffffffffff) {
    bVar7 = false;
    uVar1 = 0;
    uVar5 = *(ulong *)(this + 8);
  }
  else {
    uVar3 = param_2 >> 4;
    uVar5 = (ulong)uVar3;
    uVar2 = uVar3 - (param_1 >> 4);
    uVar4 = 0xffffffffffffffff;
    if (uVar2 < 0x3f) {
      uVar4 = 1L << ((byte)(param_1 >> 4) & 0x3f);
      uVar5 = 1L << ((byte)uVar3 & 0x3f);
      uVar5 = (uVar5 * 2 - uVar4) - (ulong)(uVar5 < uVar4);
      uVar4 = *(ulong *)this | uVar5;
    }
    bVar7 = uVar2 < 0x3f;
    uVar1 = (undefined7)(uVar5 >> 8);
    *(ulong *)this = uVar4;
    uVar5 = *(ulong *)(this + 8);
  }
  if (uVar5 == 0xffffffffffffffff) {
    bVar8 = false;
    uVar5 = *(ulong *)(this + 0x10);
  }
  else {
    uVar4 = 0xffffffffffffffff;
    if (param_2 - param_1 < 0x3f) {
      uVar6 = 1L << ((byte)param_1 & 0x3f);
      uVar4 = 1L << ((byte)param_2 & 0x3f);
      uVar4 = uVar5 | (uVar4 * 2 - uVar6) - (ulong)(uVar4 < uVar6);
    }
    bVar8 = param_2 - param_1 < 0x3f;
    *(ulong *)(this + 8) = uVar4;
    uVar5 = *(ulong *)(this + 0x10);
  }
  if (uVar5 == 0xffffffffffffffff) {
    return CONCAT71(uVar1,bVar7 | bVar8);
  }
  uVar3 = (param_2 >> 9) - (param_1 >> 9);
  uVar4 = 0xffffffffffffffff;
  if (uVar3 < 0x3f) {
    uVar4 = 1L << ((byte)(param_1 >> 9) & 0x3f);
    uVar6 = 1L << ((byte)(param_2 >> 9) & 0x3f);
    uVar4 = uVar5 | (uVar6 * 2 - uVar4) - (ulong)(uVar6 < uVar4);
  }
  *(ulong *)(this + 0x10) = uVar4;
  return CONCAT71(uVar1,bVar7 | bVar8 | uVar3 < 0x3f);
}



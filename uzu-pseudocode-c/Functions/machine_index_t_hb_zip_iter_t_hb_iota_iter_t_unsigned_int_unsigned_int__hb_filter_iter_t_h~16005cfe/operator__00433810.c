// Function : operator=
// Namespace: machine_index_t_hb_zip_iter_t_hb_iota_iter_t_unsigned_int_unsigned_int__hb_filter_iter_t_h~16005cfe
// Entry    : 00433810
// Prototype: undefined operator=(machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>>> * this, uint param_2, int param_3, machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>>> param_4)
// Body     : 00433810 - 004339ca


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned int, unsigned int>,
   hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned int, unsigned int>,
   hb_array_t<hb_glyph_info_t> >, find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t
   const&)#1}, $_7 const&, (void*)0>, find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned
   int, hb_glyph_info_t const&>)#1}, $_6 const&, (void*)0> >
   >::TEMPNAMEPLACEHOLDERVALUE(machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned int, unsigned
   int>, hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned int, unsigned int>,
   hb_array_t<hb_glyph_info_t> >, find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t
   const&)#1}, $_7 const&, (void*)0>, find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned
   int, hb_glyph_info_t const&>)#1}, $_6 const&, (void*)0> > > const&) */

void __thiscall
machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>>>
::operator=(machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
            *this,uint param_2,int param_3,
           machine_index_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>>>
           param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  this[0x48] = param_4;
  uVar10 = *(uint *)this;
  iVar8 = *(int *)(this + 0x18);
  if (iVar8 == 0) {
    _hb_CrapPool = 0;
    _DAT_0071cd88 = 0;
    DAT_0071cd90._0_4_ = 0;
  }
  if (param_3 == 0) {
    _hb_CrapPool = 0;
    _DAT_0071cd88 = 0;
    DAT_0071cd90._0_4_ = 0;
  }
  if (uVar10 < param_2) {
    iVar9 = param_2 - uVar10;
    if ((iVar9 != 0) && (*(int *)this = *(int *)this + *(int *)(this + 4) * iVar9, iVar8 != 0)) {
      iVar2 = *(int *)(this + 8);
      iVar1 = *(int *)(this + 0xc);
      iVar5 = *(int *)(this + 0x1c);
      lVar7 = *(long *)(this + 0x10);
LAB_00433899:
      iVar9 = iVar9 + -1;
      uVar10 = iVar1 + 1 + iVar2;
      lVar6 = lVar7;
      do {
        iVar2 = iVar2 + iVar1;
        *(int *)(this + 8) = iVar2;
        iVar5 = iVar5 + 1;
        lVar7 = lVar6 + 0x14;
        iVar8 = iVar8 + -1;
        *(int *)(this + 0x18) = iVar8;
        *(int *)(this + 0x1c) = iVar5;
        *(long *)(this + 0x10) = lVar7;
        if (iVar8 == 0) {
          return;
        }
        if (*(char *)(lVar6 + 0x26) != '\x06') {
          if (*(char *)(lVar6 + 0x26) != '\x0e') goto LAB_00433890;
          uVar3 = uVar10;
          do {
            if (*(uint *)(**(long **)(this + 0x30) + 0x60) <= uVar3) goto LAB_00433890;
            uVar4 = (ulong)uVar3;
            uVar3 = uVar3 + 1;
          } while (*(char *)(**(long **)(this + 0x38) + 0x12 + uVar4 * 0x14) == '\x06');
          if ((0x1c00U >> (*(uint *)(**(long **)(this + 0x38) + uVar4 * 0x14 + 0x10) & 0x1f) & 1) ==
              0) goto LAB_00433890;
        }
        uVar10 = uVar10 + iVar1;
        lVar6 = lVar7;
      } while( true );
    }
  }
  else if (((param_2 < uVar10) && (uVar10 - param_2 != 0)) &&
          (*(uint *)this = *(int *)this - (uVar10 - param_2) * *(int *)(this + 4), iVar8 != 0)) {
    iVar8 = param_2 - uVar10;
    do {
      iVar8 = iVar8 + 1;
      hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>>
      ::operator--((hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>>
                    *)(this + 8));
      if (*(int *)(this + 0x18) == 0) {
        return;
      }
    } while (iVar8 != 0);
  }
  return;
LAB_00433890:
  if (iVar9 == 0) {
    return;
  }
  goto LAB_00433899;
}



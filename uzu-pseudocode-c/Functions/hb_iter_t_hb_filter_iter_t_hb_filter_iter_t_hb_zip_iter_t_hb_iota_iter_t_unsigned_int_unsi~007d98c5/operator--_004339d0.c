// Function : operator--
// Namespace: hb_iter_t_hb_filter_iter_t_hb_filter_iter_t_hb_zip_iter_t_hb_iota_iter_t_unsigned_int_unsi~007d98c5
// Entry    : 004339d0
// Prototype: undefined operator--(hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>> * this)
// Body     : 004339d0 - 00433b31


/* hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned int, unsigned
   int>, hb_array_t<hb_glyph_info_t> >, find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t
   const&)#1}, $_7 const&, (void*)0>, find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned
   int, hb_glyph_info_t const&>)#1}, $_6 const&, (void*)0>, hb_pair_t<unsigned int,
   hb_glyph_info_t&> >::TEMPNAMEPLACEHOLDERVALUE() & */

void __thiscall
hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::{lambda(hb_glyph_info_t_const&)#1},$_7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::{lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)#1},$_6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>>
::operator--(hb_iter_t<hb_filter_iter_t<hb_filter_iter_t<hb_zip_iter_t<hb_iota_iter_t<unsigned_int,unsigned_int>,hb_array_t<hb_glyph_info_t>>,find_syllables_use(hb_buffer_t*)::_lambda(hb_glyph_info_t_const&)_1_,__7_const&,(void*)0>,find_syllables_use(hb_buffer_t*)::_lambda(hb_pair_t<unsigned_int,hb_glyph_info_t_const&>)_1_,__6_const&,(void*)0>,hb_pair_t<unsigned_int,hb_glyph_info_t&>>
             *this)

{
  int iVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  iVar1 = *(int *)(this + 4);
  iVar9 = *(int *)(this + 0x14);
  if (iVar9 != 0) {
    do {
      if (iVar9 == 0) {
        uVar8 = *(uint *)this;
        if (*(int *)(this + 0x10) == 0) goto LAB_00433b29;
        do {
          iVar9 = -iVar1 + uVar8;
          uVar8 = uVar8 - iVar1;
          *(int *)this = iVar9;
          cVar3 = *(char *)(*(long *)(this + 8) + 0x12);
        } while (cVar3 == '\x06');
        iVar9 = 0;
      }
      else {
        uVar8 = *(uint *)this;
        iVar4 = *(int *)(this + 0x10);
        iVar6 = iVar9;
        do {
          *(uint *)this = -iVar1 + uVar8;
          if (iVar6 == 0) {
            iVar6 = 0;
          }
          else {
            iVar4 = iVar4 + 1;
            *(int *)(this + 0x10) = iVar4;
            iVar6 = iVar6 + -1;
            *(int *)(this + 0x14) = iVar6;
            *(long *)(this + 8) = *(long *)(this + 8) + -0x14;
            iVar9 = iVar6;
          }
          if (iVar4 == 0) {
            return;
          }
          uVar8 = uVar8 - iVar1;
          cVar3 = *(char *)(*(long *)(this + 8) + 0x12);
        } while (cVar3 == '\x06');
      }
      if (cVar3 != '\x0e') {
        return;
      }
      do {
        uVar8 = uVar8 + 1;
        if (*(uint *)(**(long **)(this + 0x28) + 0x60) <= uVar8) {
          return;
        }
        lVar2 = **(long **)(this + 0x30);
      } while (*(char *)(lVar2 + 0x12 + (ulong)uVar8 * 0x14) == '\x06');
      if ((0x1c00U >> (*(uint *)(lVar2 + (ulong)uVar8 * 0x14 + 0x10) & 0x1f) & 1) == 0) {
        return;
      }
    } while( true );
  }
  uVar8 = *(uint *)this;
  if (*(int *)(this + 0x10) != 0) {
    uVar10 = (uVar8 - iVar1) + 1;
    do {
      uVar8 = uVar8 - iVar1;
      *(uint *)this = uVar8;
      if (*(char *)(*(long *)(this + 8) + 0x12) != '\x06') {
        if (*(char *)(*(long *)(this + 8) + 0x12) != '\x0e') {
          return;
        }
        uVar5 = uVar10;
        do {
          if (*(uint *)(**(long **)(this + 0x28) + 0x60) <= uVar5) {
            return;
          }
          lVar2 = **(long **)(this + 0x30);
          uVar7 = (ulong)uVar5;
          uVar5 = uVar5 + 1;
        } while (*(char *)(lVar2 + 0x12 + uVar7 * 0x14) == '\x06');
        if ((0x1c00U >> (*(uint *)(lVar2 + uVar7 * 0x14 + 0x10) & 0x1f) & 1) == 0) {
          return;
        }
      }
      uVar10 = uVar10 - iVar1;
    } while( true );
  }
LAB_00433b29:
  *(uint *)this = uVar8 - iVar1;
  return;
}



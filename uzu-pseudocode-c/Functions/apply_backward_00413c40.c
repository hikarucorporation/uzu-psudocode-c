// Function : apply_backward
// Namespace: 
// Entry    : 00413c40
// Prototype: undefined apply_backward(hb_ot_apply_context_t * param_1, ulong * param_2, int param_3)
// Body     : 00413c40 - 00413d81


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* apply_backward(OT::hb_ot_apply_context_t*, OT::hb_ot_layout_lookup_accelerator_t const&, unsigned
   int) */

void __cdecl apply_backward(hb_ot_apply_context_t *param_1,ulong *param_2,int param_3)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  int iVar8;
  
  lVar2 = *(long *)(param_1 + 0xa0);
  uVar6 = *(uint *)(lVar2 + 0x5c);
  do {
    lVar3 = *(long *)(lVar2 + 0x70);
    uVar5 = (ulong)uVar6;
    uVar6 = *(uint *)(lVar3 + uVar5 * 0x14);
    if (((((*param_2 >> ((ulong)(uVar6 >> 4) & 0x3f) & 1) != 0) &&
         ((param_2[1] >> ((ulong)uVar6 & 0x3f) & 1) != 0)) &&
        ((param_2[2] >> ((ulong)(uVar6 >> 9) & 0x3f) & 1) != 0)) &&
       ((*(uint *)(lVar3 + 4 + uVar5 * 0x14) & *(uint *)(param_1 + 300)) != 0)) {
      uVar1 = *(ushort *)(lVar3 + 0xc + uVar5 * 0x14);
      if ((((*(uint *)(param_1 + 0x134) & (uint)uVar1 & 0xe) == 0) &&
          (((uVar1 & 8) == 0 ||
           (uVar5 = OT::hb_ot_apply_context_t::match_properties_mark
                              (param_1,uVar6,(uint)uVar1,*(uint *)(param_1 + 0x134)),
           (char)uVar5 != '\0')))) && (param_3 != 0)) {
        puVar7 = param_2 + 4;
        iVar8 = param_3;
        do {
          while( true ) {
            uVar6 = *(uint *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x70) +
                             (ulong)*(uint *)(*(long *)(param_1 + 0xa0) + 0x5c) * 0x14);
            if ((((puVar7[4] >> ((ulong)(uVar6 >> 4) & 0x3f) & 1) == 0) ||
                ((puVar7[5] >> ((ulong)uVar6 & 0x3f) & 1) == 0)) ||
               ((puVar7[6] >> ((ulong)(uVar6 >> 9) & 0x3f) & 1) == 0)) break;
            cVar4 = (*(code *)puVar7[1])(*puVar7,param_1);
            if (cVar4 != '\0') goto LAB_00413c70;
            iVar8 = iVar8 + -1;
            puVar7 = puVar7 + 7;
            if (iVar8 == 0) goto LAB_00413c70;
          }
          puVar7 = puVar7 + 7;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
LAB_00413c70:
    uVar6 = *(int *)(lVar2 + 0x5c) - 1;
    *(uint *)(lVar2 + 0x5c) = uVar6;
    if ((int)uVar6 < 0) {
      return;
    }
  } while( true );
}



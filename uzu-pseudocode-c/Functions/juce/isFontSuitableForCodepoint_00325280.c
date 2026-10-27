// Function : isFontSuitableForCodepoint
// Namespace: juce
// Entry    : 00325280
// Prototype: ulong isFontSuitableForCodepoint(long * param_1, int param_2, undefined8 param_3, undefined8 param_4, uint * param_5, ulong param_6)
// Body     : 00325280 - 00325438


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::isFontSuitableForCodepoint(juce::Font const&, wchar_t) */

ulong __cdecl
juce::isFontSuitableForCodepoint
          (long *param_1,int param_2,undefined8 param_3,undefined8 param_4,uint *param_5,
          ulong param_6)

{
  long lVar1;
  int iVar2;
  int **ppiVar3;
  undefined8 unaff_RBP;
  undefined7 uVar5;
  ulong uVar4;
  undefined8 uVar6;
  undefined4 local_8c;
  int *local_88 [2];
  int *local_78 [2];
  int *local_68 [2];
  int *local_58 [2];
  int *local_48 [3];
  undefined1 local_30 [16];
  
  ppiVar3 = local_88;
  Font::SharedFontInternal::getFontPtr(ppiVar3,*param_1,param_1,param_4,param_5,param_6);
  if (local_88[0] == (int *)0x0) {
    uVar4 = 0;
    goto LAB_003253b7;
  }
  uVar5 = (undefined7)((ulong)unaff_RBP >> 8);
  switch(param_2) {
  case 0:
    goto switchD_003252c6_caseD_0;
  default:
    if (param_2 - 10U < 4) {
      ppiVar3 = local_78;
      switch(param_2) {
      case 0xb:
        goto switchD_003252c6_caseD_7;
      case 0xc:
        goto switchD_003252c6_caseD_8;
      case 0xd:
        goto switchD_003252c6_caseD_9;
      }
    }
    else {
      ppiVar3 = local_68;
      if (param_2 < 0x85) {
        if (param_2 != 0x1a) {
          if (param_2 != 0x1b) goto LAB_00325343;
          goto switchD_003252c6_caseD_7;
        }
      }
      else {
        if (param_2 == 0x85) goto switchD_003252c6_caseD_8;
        if (param_2 == 0x61c) goto switchD_003252c6_caseD_9;
LAB_00325343:
        if (param_2 - 0x200eU < 0x1e) {
          ppiVar3 = local_58;
          switch(param_2) {
          case 0x200e:
            goto switchD_003252c6_caseD_0;
          case 0x200f:
            goto switchD_003252c6_caseD_7;
          case 0x202a:
            goto switchD_003252c6_caseD_8;
          case 0x202b:
            goto switchD_003252c6_caseD_9;
          }
        }
        ppiVar3 = local_48;
        if (param_2 < 0x2066) {
          if (param_2 != 0x202c) {
            if (param_2 == 0x202d) goto switchD_003252c6_caseD_7;
            if (param_2 == 0x202e) goto switchD_003252c6_caseD_8;
LAB_00325418:
            ppiVar3 = (int **)local_30;
            if (param_2 != 0x2069) {
              ppiVar3 = (int **)(local_30 + 4);
            }
            break;
          }
        }
        else if (1 < param_2 - 0x2067U) {
          if (param_2 != 0x2066) goto LAB_00325418;
          goto switchD_003252c6_caseD_9;
        }
      }
    }
    goto switchD_003252c6_caseD_0;
  case 7:
switchD_003252c6_caseD_7:
    ppiVar3 = (int **)((long)ppiVar3 + 4);
    break;
  case 8:
switchD_003252c6_caseD_8:
    ppiVar3 = ppiVar3 + 1;
    break;
  case 9:
switchD_003252c6_caseD_9:
    ppiVar3 = (int **)((long)ppiVar3 + 0xc);
  }
  uVar4 = CONCAT71(uVar5,1);
  if (ppiVar3 == (int **)(local_30 + 4)) {
    local_8c = 0;
    lVar1 = *(long *)(*(long *)(local_88[0] + 0x24) + 0x10);
    if (lVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar1 + 0x10);
    }
                    /* try { // try from 0032539c to 003253a8 has its CatchHandler @ 00325439 */
    iVar2 = (**(code **)(*(long *)(local_88[0] + 0x24) + 0x30))
                      (local_88[0],*(undefined8 *)(local_88[0] + 0x26),param_2,&local_8c,uVar6);
    uVar4 = CONCAT71(uVar5,iVar2 != 0);
  }
LAB_003253af:
                    /* try { // try from 003253af to 003253b6 has its CatchHandler @ 0032544c */
  hb_font_destroy(local_88[0]);
LAB_003253b7:
  return uVar4 & 0xffffffff;
switchD_003252c6_caseD_0:
  uVar4 = CONCAT71(uVar5,1);
  goto LAB_003253af;
}



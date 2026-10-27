// Function : png_free_data
// Namespace: juce:pnglibNamespace
// Entry    : 0039c840
// Prototype: undefined png_free_data(long param_1, long param_2, uint param_3, int param_4)
// Body     : 0039c840 - 0039ce0a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_free_data(juce::pnglibNamespace::png_struct_def const*,
   juce::pnglibNamespace::png_info_def*, unsigned int, int) */

void __cdecl
juce::pnglibNamespace::png_free_data(long param_1,long param_2,uint param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  undefined8 *puVar9;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  pvVar8 = *(void **)(param_2 + 0xa0);
  if ((pvVar8 != (void *)0x0) && ((*(uint *)(param_2 + 0x11c) & param_3 & 0x4000) != 0)) {
    if (param_4 == -1) {
      iVar2 = *(int *)(param_2 + 0x94);
      if (0 < iVar2) {
        lVar6 = 1;
        lVar7 = 8;
        pvVar8 = *(void **)((long)pvVar8 + 8);
        while( true ) {
          if (pvVar8 != (void *)0x0) {
            free(pvVar8);
            iVar2 = *(int *)(param_2 + 0x94);
          }
          if (iVar2 <= lVar6) break;
          lVar6 = lVar6 + 1;
          lVar7 = lVar7 + 0x38;
          pvVar8 = *(void **)(*(long *)(param_2 + 0xa0) + lVar7);
        }
        pvVar8 = *(void **)(param_2 + 0xa0);
      }
      if (pvVar8 != (void *)0x0) {
        free(pvVar8);
      }
      *(undefined8 *)(param_2 + 0xa0) = 0;
      *(undefined8 *)(param_2 + 0x94) = 0;
    }
    else {
      if (*(void **)((long)pvVar8 + 8) != (void *)0x0) {
        free(*(void **)((long)pvVar8 + 8));
        pvVar8 = *(void **)(param_2 + 0xa0);
      }
      *(undefined8 *)((long)pvVar8 + 8) = 0;
    }
  }
  uVar3 = *(uint *)(param_2 + 0x11c);
  if ((param_3 & uVar3 & 0x2000) != 0) {
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xef;
    if (*(void **)(param_2 + 0xb8) != (void *)0x0) {
      free(*(void **)(param_2 + 0xb8));
      uVar3 = *(uint *)(param_2 + 0x11c);
    }
    *(undefined8 *)(param_2 + 0xb8) = 0;
    *(undefined2 *)(param_2 + 0x22) = 0;
  }
  if ((param_3 & uVar3 & 0x100) != 0) {
    if (*(void **)(param_2 + 0x140) != (void *)0x0) {
      free(*(void **)(param_2 + 0x140));
    }
    if (*(void **)(param_2 + 0x148) != (void *)0x0) {
      free(*(void **)(param_2 + 0x148));
    }
    *(undefined8 *)(param_2 + 0x140) = 0;
    *(undefined8 *)(param_2 + 0x148) = 0;
    *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) & 0xbf;
    uVar3 = *(uint *)(param_2 + 0x11c);
  }
  if ((param_3 & uVar3 & 0x80) != 0) {
    if (*(void **)(param_2 + 0xf8) != (void *)0x0) {
      free(*(void **)(param_2 + 0xf8));
    }
    if (*(void **)(param_2 + 0x108) != (void *)0x0) {
      free(*(void **)(param_2 + 0x108));
    }
    *(undefined8 *)(param_2 + 0xf8) = 0;
    *(undefined8 *)(param_2 + 0x108) = 0;
    puVar9 = *(undefined8 **)(param_2 + 0x110);
    if (puVar9 != (undefined8 *)0x0) {
      bVar1 = *(byte *)(param_2 + 0x119);
      if (bVar1 != 0) {
        uVar5 = 1;
        pvVar8 = (void *)*puVar9;
        while( true ) {
          if (pvVar8 != (void *)0x0) {
            free(pvVar8);
            bVar1 = *(byte *)(param_2 + 0x119);
          }
          if (bVar1 <= uVar5) break;
          uVar5 = uVar5 + 1;
          pvVar8 = *(void **)(*(long *)(param_2 + 0x110) + -8 + uVar5 * 8);
        }
        puVar9 = *(undefined8 **)(param_2 + 0x110);
      }
      if (puVar9 != (undefined8 *)0x0) {
        free(puVar9);
      }
      *(undefined8 *)(param_2 + 0x110) = 0;
    }
    *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) & 0xfb;
    uVar3 = *(uint *)(param_2 + 0x11c);
  }
  if ((uVar3 & param_3 & 0x10) != 0) {
    if (*(void **)(param_2 + 0x80) != (void *)0x0) {
      free(*(void **)(param_2 + 0x80));
    }
    if (*(void **)(param_2 + 0x88) != (void *)0x0) {
      free(*(void **)(param_2 + 0x88));
    }
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x88) = 0;
    *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) & 0xef;
  }
  puVar9 = *(undefined8 **)(param_2 + 0x130);
  if ((puVar9 != (undefined8 *)0x0) && ((*(uint *)(param_2 + 0x11c) & param_3 & 0x20) != 0)) {
    if (param_4 == -1) {
      if (0 < *(int *)(param_2 + 0x138)) {
        lVar6 = 1;
        lVar7 = 0;
        pvVar8 = (void *)*puVar9;
        while( true ) {
          if (pvVar8 != (void *)0x0) {
            free(pvVar8);
            puVar9 = *(undefined8 **)(param_2 + 0x130);
          }
          pvVar8 = *(void **)((long)puVar9 + lVar7 + 0x10);
          if (pvVar8 != (void *)0x0) {
            free(pvVar8);
          }
          if (*(int *)(param_2 + 0x138) <= lVar6) break;
          puVar9 = *(undefined8 **)(param_2 + 0x130);
          lVar6 = lVar6 + 1;
          lVar7 = lVar7 + 0x20;
          pvVar8 = *(void **)((long)puVar9 + lVar7);
        }
        puVar9 = *(undefined8 **)(param_2 + 0x130);
      }
      if (puVar9 != (undefined8 *)0x0) {
        free(puVar9);
      }
      *(undefined8 *)(param_2 + 0x130) = 0;
      *(undefined4 *)(param_2 + 0x138) = 0;
      *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) & 0xdf;
      pvVar8 = *(void **)(param_2 + 0x120);
      goto joined_r0x0039cb59;
    }
    if ((void *)*puVar9 != (void *)0x0) {
      free((void *)*puVar9);
      puVar9 = *(undefined8 **)(param_2 + 0x130);
    }
    if ((void *)puVar9[2] != (void *)0x0) {
      free((void *)puVar9[2]);
      puVar9 = *(undefined8 **)(param_2 + 0x130);
    }
    *puVar9 = 0;
    puVar9[2] = 0;
  }
  pvVar8 = *(void **)(param_2 + 0x120);
joined_r0x0039cb59:
  if ((pvVar8 != (void *)0x0) && ((*(uint *)(param_2 + 0x11c) & param_3 & 0x200) != 0)) {
    if (param_4 == -1) {
      iVar2 = *(int *)(param_2 + 0x128);
      if (0 < iVar2) {
        lVar6 = 1;
        lVar7 = 8;
        pvVar8 = *(void **)((long)pvVar8 + 8);
        while( true ) {
          if (pvVar8 != (void *)0x0) {
            free(pvVar8);
            iVar2 = *(int *)(param_2 + 0x128);
          }
          if (iVar2 <= lVar6) break;
          lVar6 = lVar6 + 1;
          lVar7 = lVar7 + 0x20;
          pvVar8 = *(void **)(*(long *)(param_2 + 0x120) + lVar7);
        }
        pvVar8 = *(void **)(param_2 + 0x120);
      }
      if (pvVar8 != (void *)0x0) {
        free(pvVar8);
      }
      *(undefined8 *)(param_2 + 0x120) = 0;
      *(undefined4 *)(param_2 + 0x128) = 0;
    }
    else {
      if (*(void **)((long)pvVar8 + 8) != (void *)0x0) {
        free(*(void **)((long)pvVar8 + 8));
        pvVar8 = *(void **)(param_2 + 0x120);
      }
      *(undefined8 *)((long)pvVar8 + 8) = 0;
    }
  }
  uVar3 = *(uint *)(param_2 + 0x11c);
  if ((param_3 & uVar3 & 8) != 0) {
    if (*(void **)(param_2 + 0xf0) != (void *)0x0) {
      free(*(void **)(param_2 + 0xf0));
      uVar3 = *(uint *)(param_2 + 0x11c);
    }
    *(undefined8 *)(param_2 + 0xf0) = 0;
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xbf;
  }
  if ((param_3 & uVar3 & 0x1000) != 0) {
    if (*(void **)(param_2 + 0x18) != (void *)0x0) {
      free(*(void **)(param_2 + 0x18));
      uVar3 = *(uint *)(param_2 + 0x11c);
    }
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xf7;
    *(undefined2 *)(param_2 + 0x20) = 0;
  }
  if ((param_3 & uVar3 & 0x40) != 0) {
    puVar9 = *(undefined8 **)(param_2 + 0x150);
    if (puVar9 != (undefined8 *)0x0) {
      uVar3 = *(uint *)(param_2 + 4);
      if (uVar3 != 0) {
        uVar5 = 1;
        pvVar8 = (void *)*puVar9;
        while( true ) {
          if (pvVar8 != (void *)0x0) {
            free(pvVar8);
            uVar3 = *(uint *)(param_2 + 4);
          }
          if (uVar3 <= uVar5) break;
          uVar5 = uVar5 + 1;
          pvVar8 = *(void **)(*(long *)(param_2 + 0x150) + -8 + uVar5 * 8);
        }
        puVar9 = *(undefined8 **)(param_2 + 0x150);
      }
      if (puVar9 != (undefined8 *)0x0) {
        free(puVar9);
      }
      *(undefined8 *)(param_2 + 0x150) = 0;
      uVar3 = *(uint *)(param_2 + 0x11c);
    }
    *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) & 0x7f;
  }
  uVar4 = param_3 & 0xffffbddf;
  if (param_4 == -1) {
    uVar4 = param_3;
  }
  *(uint *)(param_2 + 0x11c) = ~uVar4 & uVar3;
  return;
}



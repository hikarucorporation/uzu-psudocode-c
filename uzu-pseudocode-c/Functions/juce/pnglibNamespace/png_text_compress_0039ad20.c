// Function : png_text_compress
// Namespace: juce:pnglibNamespace
// Entry    : 0039ad20
// Prototype: ulong png_text_compress(long param_1, ulong param_2, undefined8 * param_3, int param_4)
// Body     : 0039ad20 - 0039af9b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_text_compress(juce::pnglibNamespace::png_struct_def*, unsigned int,
   juce::pnglibNamespace::compression_state*, unsigned int) */

ulong __cdecl
juce::pnglibNamespace::png_text_compress(long param_1,ulong param_2,undefined8 *param_3,int param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  int local_4c;
  undefined8 *local_40;
  
  uVar1 = png_deflate_claim(param_1,param_2,param_3[1]);
  uVar8 = uVar1 & 0xffffffff;
  if ((int)uVar1 == 0) {
    local_40 = (undefined8 *)(param_1 + 0xd0);
    uVar1 = param_3[1];
    *(undefined8 *)(param_1 + 0x60) = *param_3;
    *(byte **)(param_1 + 0x78) = (byte *)((long)param_3 + 0x14);
    *(undefined4 *)(param_1 + 0x80) = 0x400;
    iVar7 = 0x400;
    local_4c = 0x400;
    do {
      uVar8 = 0xffffffff;
      if (uVar1 < 0xffffffff) {
        uVar8 = uVar1;
      }
      uVar1 = uVar1 - uVar8;
      *(int *)(param_1 + 0x68) = (int)uVar8;
      if (iVar7 == 0) {
        uVar8 = 0xfffffffc;
        iVar7 = 0;
        if (local_4c + param_4 < 0) break;
        puVar2 = (undefined8 *)*local_40;
        uVar3 = *(uint *)(param_1 + 0xd8);
        if (puVar2 == (undefined8 *)0x0) {
          puVar2 = malloc((ulong)uVar3 + 8);
          if (puVar2 == (undefined8 *)0x0) break;
          *puVar2 = 0;
          *local_40 = puVar2;
        }
        *(undefined8 **)(param_1 + 0x78) = puVar2 + 1;
        *(uint *)(param_1 + 0x80) = uVar3;
        local_4c = local_4c + uVar3;
        local_40 = puVar2;
      }
      uVar6 = zlibNamespace::deflate((long *)(param_1 + 0x60),(uint)(uVar1 == 0) << 2);
      uVar8 = uVar6 & 0xffffffff;
      iVar7 = *(int *)(param_1 + 0x80);
      uVar1 = *(uint *)(param_1 + 0x68) + uVar1;
      *(undefined4 *)(param_1 + 0x68) = 0;
    } while ((int)uVar6 == 0);
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(int *)(param_3 + 2) = local_4c - iVar7;
    if ((uint)((local_4c - iVar7) + param_4) < 0x7fffffff) {
      if (*(long *)(param_1 + 0x90) == 0) {
        *(undefined **)(param_1 + 0x90) = (&PTR_s_unexpected_zlib_return_00712720)[(int)uVar8 + 7];
      }
      *(undefined4 *)(param_1 + 0x58) = 0;
      if (((int)uVar8 == 1) && (uVar1 == 0)) {
        uVar1 = param_3[1];
        uVar8 = 0;
        if ((uVar1 < 0x4001) &&
           ((bVar5 = *(byte *)((long)param_3 + 0x14), (bVar5 & 0xf) == 8 && ((bVar5 & 0xf0) < 0x71))
           )) {
          bVar5 = bVar5 >> 4;
          uVar6 = 0x80L << bVar5;
          if (uVar1 <= uVar6) {
            uVar3 = (uint)bVar5;
            uVar4 = (uint)bVar5 << 0xc | 0x800;
            bVar5 = bVar5 << 4 | 8;
            do {
              uVar3 = uVar3 - 1;
              uVar4 = uVar4 - 0x1000;
              bVar5 = bVar5 - 0x10;
              if (uVar3 == 0) break;
              uVar6 = uVar6 >> 1 & 0x7fffffff;
            } while (uVar1 <= uVar6);
            *(byte *)((long)param_3 + 0x14) = bVar5;
            uVar3 = *(byte *)((long)param_3 + 0x15) & 0xffffffe0;
            bVar5 = (byte)uVar3;
            *(byte *)((long)param_3 + 0x15) =
                 ((char)((uVar4 | uVar3) / 0x1f) * -0x1f + bVar5 | bVar5) ^ 0x1f;
          }
        }
      }
    }
    else {
      *(char **)(param_1 + 0x90) = "compressed data too long";
      *(undefined4 *)(param_1 + 0x58) = 0;
      uVar8 = 0xfffffffc;
    }
  }
  return uVar8;
}



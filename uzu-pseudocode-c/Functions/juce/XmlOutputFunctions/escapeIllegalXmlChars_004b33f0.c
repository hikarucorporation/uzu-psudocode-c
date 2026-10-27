// Function : escapeIllegalXmlChars
// Namespace: juce:XmlOutputFunctions
// Entry    : 004b33f0
// Prototype: undefined escapeIllegalXmlChars(long * param_1, byte * param_2, char param_3)
// Body     : 004b33f0 - 004b36d3


/* WARNING: Removing unreachable block (ram,0x004b3656) */
/* WARNING: Removing unreachable block (ram,0x004b3670) */
/* WARNING: Removing unreachable block (ram,0x004b3698) */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::XmlOutputFunctions::escapeIllegalXmlChars(juce::OutputStream&, juce::String const&, bool)
    */

void __cdecl
juce::XmlOutputFunctions::escapeIllegalXmlChars(long *param_1,byte *param_2,char param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  uint uVar7;
  ulong uVar8;
  byte local_3a [10];
  
LAB_004b344b:
  do {
    pbVar6 = param_2 + 1;
    bVar1 = *param_2;
    uVar8 = (ulong)bVar1;
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0x40) != 0) {
        if ((bVar1 & 0x20) == 0) {
          uVar7 = 0x3f;
          lVar5 = 0;
          bVar2 = false;
          bVar3 = false;
        }
        else {
          bVar2 = true;
          if ((bVar1 & 0x10) == 0) {
            uVar7 = 0x1f;
            lVar5 = 1;
            bVar3 = false;
          }
          else {
            uVar7 = 0xf;
            lVar5 = 2;
            bVar3 = true;
          }
        }
        uVar7 = bVar1 & uVar7;
        uVar8 = (ulong)uVar7;
        if ((param_2[1] & 0xffffffc0) == 0x80) {
          pbVar6 = param_2 + lVar5 + 2;
          uVar7 = param_2[1] & 0x3f | uVar7 << 6;
          uVar8 = (ulong)uVar7;
          if (bVar2) {
            pbVar4 = param_2 + 2;
            if ((*pbVar4 & 0xc0) == 0x80) {
              uVar7 = *pbVar4 & 0x3f | uVar7 << 6;
              uVar8 = (ulong)uVar7;
              if (!bVar3) goto LAB_004b3459;
              pbVar4 = param_2 + 3;
              if ((*pbVar4 & 0xffffffc0) != 0x80) goto LAB_004b3560;
              uVar7 = *pbVar4 & 0x3f | uVar7 << 6;
              uVar8 = (ulong)uVar7;
            }
            else {
LAB_004b3560:
              uVar7 = (uint)uVar8;
              pbVar6 = pbVar4;
            }
            if (uVar7 == 0) {
              return;
            }
            goto LAB_004b3569;
          }
        }
        goto LAB_004b3459;
      }
      uVar8 = (ulong)(bVar1 & 0x7f);
      if ((bVar1 & 0x7f) == 0) {
        return;
      }
    }
    else {
LAB_004b3459:
      if ((int)uVar8 == 0) {
        return;
      }
    }
LAB_004b3569:
    param_2 = pbVar6;
    if ((0x7f < (uint)uVar8) ||
       (((byte)LegalCharLookupTable::isLegal(unsigned_int)::legalChars[uVar8 >> 3] >>
         ((byte)uVar8 & 7) & 1) == 0)) {
      switch((uint)uVar8) {
      case 10:
      case 0xd:
        if (param_3 == '\0') goto LAB_004b343e;
      default:
        (**(code **)(*param_1 + 0x28))(param_1,&DAT_005e63f2,2);
        pbVar6 = local_3a + 1;
        do {
          uVar7 = (uint)uVar8;
          pbVar6[-1] = (char)uVar8 + (char)(uVar8 / 10) * -10 | 0x30;
          pbVar6 = pbVar6 + -1;
          uVar8 = uVar8 / 10;
        } while (9 < uVar7);
        local_3a[1] = 0;
        (**(code **)(*param_1 + 0x28))(param_1,pbVar6,local_3a + ~(ulong)pbVar6 + 2);
        (**(code **)(*param_1 + 0x30))(param_1);
        break;
      case 0x22:
        (**(code **)(*param_1 + 0x28))(param_1,&DAT_005e63e1,6);
        break;
      case 0x26:
        (**(code **)(*param_1 + 0x28))(param_1,&DAT_005e63db,5);
        break;
      case 0x3c:
        (**(code **)(*param_1 + 0x28))(param_1,&DAT_005e63ed,4);
        break;
      case 0x3e:
        (**(code **)(*param_1 + 0x28))(param_1,&DAT_005e63e8,4);
      }
      goto LAB_004b344b;
    }
LAB_004b343e:
    (**(code **)(*param_1 + 0x30))(param_1);
  } while( true );
}



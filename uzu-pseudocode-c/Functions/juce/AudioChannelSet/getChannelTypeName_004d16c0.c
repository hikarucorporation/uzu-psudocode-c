// Function : getChannelTypeName
// Namespace: juce:AudioChannelSet
// Entry    : 004d16c0
// Prototype: undefined getChannelTypeName(AudioChannelSet * this, int param_1)
// Body     : 004d16c0 - 004d1c20


/* juce::AudioChannelSet::getChannelTypeName(juce::AudioChannelSet::ChannelType) */

void __thiscall juce::AudioChannelSet::getChannelTypeName(AudioChannelSet *this,int param_1)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  char *pcVar6;
  int *piVar7;
  long local_40 [4];
  byte abStack_1a [10];
  
  if (param_1 < 0x80) {
    switch(param_1) {
    case 1:
      pcVar6 = "Left";
      break;
    case 2:
      pcVar6 = "Right";
      break;
    case 3:
      pcVar6 = "Centre";
      break;
    case 4:
      pcVar6 = &DAT_005e6428;
      break;
    case 5:
      pcVar6 = "Left Surround";
      break;
    case 6:
      pcVar6 = "Right Surround";
      break;
    case 7:
      pcVar6 = "Left Centre";
      break;
    case 8:
      pcVar6 = "Right Centre";
      break;
    case 9:
      pcVar6 = "Centre Surround";
      break;
    case 10:
      pcVar6 = "Left Surround Side";
      break;
    case 0xb:
      pcVar6 = "Right Surround Side";
      break;
    case 0xc:
      pcVar6 = "Top Middle";
      break;
    case 0xd:
      pcVar6 = "Top Front Left";
      break;
    case 0xe:
      pcVar6 = "Top Front Centre";
      break;
    case 0xf:
      pcVar6 = "Top Front Right";
      break;
    case 0x10:
      pcVar6 = "Top Rear Left";
      break;
    case 0x11:
      pcVar6 = "Top Rear Centre";
      break;
    case 0x12:
      pcVar6 = "Top Rear Right";
      break;
    case 0x13:
      pcVar6 = "LFE 2";
      break;
    case 0x14:
      pcVar6 = "Left Surround Rear";
      break;
    case 0x15:
      pcVar6 = "Right Surround Rear";
      break;
    case 0x16:
      pcVar6 = "Wide Left";
      break;
    case 0x17:
      pcVar6 = "Wide Right";
      break;
    case 0x18:
      pcVar6 = "Ambisonic W";
      break;
    case 0x19:
      pcVar6 = "Ambisonic Y";
      break;
    case 0x1a:
      pcVar6 = "Ambisonic Z";
      break;
    case 0x1b:
      pcVar6 = "Ambisonic X";
      break;
    case 0x1c:
      pcVar6 = "Top Side Left";
      break;
    case 0x1d:
      pcVar6 = "Top Side Right";
      break;
    case 0x1e:
      pcVar6 = "Ambisonic 4";
      break;
    case 0x1f:
      pcVar6 = "Ambisonic 5";
      break;
    case 0x20:
      pcVar6 = "Ambisonic 6";
      break;
    case 0x21:
      pcVar6 = "Ambisonic 7";
      break;
    case 0x22:
      pcVar6 = "Ambisonic 8";
      break;
    case 0x23:
      pcVar6 = "Ambisonic 9";
      break;
    case 0x24:
      pcVar6 = "Ambisonic 10";
      break;
    case 0x25:
      pcVar6 = "Ambisonic 11";
      break;
    case 0x26:
      pcVar6 = "Ambisonic 12";
      break;
    case 0x27:
      pcVar6 = "Ambisonic 13";
      break;
    case 0x28:
      pcVar6 = "Ambisonic 14";
      break;
    case 0x29:
      pcVar6 = "Ambisonic 15";
      break;
    case 0x2a:
      pcVar6 = "Ambisonic 16";
      break;
    case 0x2b:
      pcVar6 = "Ambisonic 17";
      break;
    case 0x2c:
      pcVar6 = "Ambisonic 18";
      break;
    case 0x2d:
      pcVar6 = "Ambisonic 19";
      break;
    case 0x2e:
      pcVar6 = "Ambisonic 20";
      break;
    case 0x2f:
      pcVar6 = "Ambisonic 21";
      break;
    case 0x30:
      pcVar6 = "Ambisonic 22";
      break;
    case 0x31:
      pcVar6 = "Ambisonic 23";
      break;
    case 0x32:
      pcVar6 = "Ambisonic 24";
      break;
    case 0x33:
      pcVar6 = "Ambisonic 25";
      break;
    case 0x34:
      pcVar6 = "Ambisonic 26";
      break;
    case 0x35:
      pcVar6 = "Ambisonic 27";
      break;
    case 0x36:
      pcVar6 = "Ambisonic 28";
      break;
    case 0x37:
      pcVar6 = "Ambisonic 29";
      break;
    case 0x38:
      pcVar6 = "Ambisonic 30";
      break;
    case 0x39:
      pcVar6 = "Ambisonic 31";
      break;
    case 0x3a:
      pcVar6 = "Ambisonic 32";
      break;
    case 0x3b:
      pcVar6 = "Ambisonic 33";
      break;
    case 0x3c:
      pcVar6 = "Ambisonic 34";
      break;
    case 0x3d:
      pcVar6 = "Ambisonic 35";
      break;
    case 0x3e:
      pcVar6 = "Bottom Front Left";
      break;
    case 0x3f:
      pcVar6 = "Bottom Front Centre";
      break;
    case 0x40:
      pcVar6 = "Bottom Front Right";
      break;
    case 0x41:
      pcVar6 = "Proximity Left";
      break;
    case 0x42:
      pcVar6 = "Proximity Right";
      break;
    case 0x43:
      pcVar6 = "Bottom Side Left";
      break;
    case 0x44:
      pcVar6 = "Bottom Side Right";
      break;
    case 0x45:
      pcVar6 = "Bottom Rear Left";
      break;
    case 0x46:
      pcVar6 = "Bottom Rear Centre";
      break;
    case 0x47:
      pcVar6 = "Bottom Rear Right";
      break;
    case 0x48:
      pcVar6 = "Ambisonic 36";
      break;
    case 0x49:
      pcVar6 = "Ambisonic 37";
      break;
    case 0x4a:
      pcVar6 = "Ambisonic 38";
      break;
    case 0x4b:
      pcVar6 = "Ambisonic 39";
      break;
    case 0x4c:
      pcVar6 = "Ambisonic 40";
      break;
    case 0x4d:
      pcVar6 = "Ambisonic 41";
      break;
    case 0x4e:
      pcVar6 = "Ambisonic 42";
      break;
    case 0x4f:
      pcVar6 = "Ambisonic 43";
      break;
    case 0x50:
      pcVar6 = "Ambisonic 44";
      break;
    case 0x51:
      pcVar6 = "Ambisonic 45";
      break;
    case 0x52:
      pcVar6 = "Ambisonic 46";
      break;
    case 0x53:
      pcVar6 = "Ambisonic 47";
      break;
    case 0x54:
      pcVar6 = "Ambisonic 48";
      break;
    case 0x55:
      pcVar6 = "Ambisonic 49";
      break;
    case 0x56:
      pcVar6 = "Ambisonic 50";
      break;
    case 0x57:
      pcVar6 = "Ambisonic 51";
      break;
    case 0x58:
      pcVar6 = "Ambisonic 52";
      break;
    case 0x59:
      pcVar6 = "Ambisonic 53";
      break;
    case 0x5a:
      pcVar6 = "Ambisonic 54";
      break;
    case 0x5b:
      pcVar6 = "Ambisonic 55";
      break;
    case 0x5c:
      pcVar6 = "Ambisonic 56";
      break;
    case 0x5d:
      pcVar6 = "Ambisonic 57";
      break;
    case 0x5e:
      pcVar6 = "Ambisonic 58";
      break;
    case 0x5f:
      pcVar6 = "Ambisonic 59";
      break;
    case 0x60:
      pcVar6 = "Ambisonic 60";
      break;
    case 0x61:
      pcVar6 = "Ambisonic 61";
      break;
    case 0x62:
      pcVar6 = "Ambisonic 62";
      break;
    case 99:
      pcVar6 = "Ambisonic 63";
      break;
    default:
      pcVar6 = "Unknown";
    }
    juce::String::String((String *)this,(byte *)pcVar6);
    return;
  }
  abStack_1a[1] = 0;
  lVar3 = 0;
  uVar5 = param_1 - 0x7f;
  do {
    lVar4 = lVar3;
    abStack_1a[lVar4] = (char)uVar5 + (char)(uVar5 / 10) * -10 | 0x30;
    bVar2 = 9 < uVar5;
    lVar3 = lVar4 + -1;
    uVar5 = uVar5 / 10;
  } while (bVar2);
  local_40[0] = StringHolderUtils::createFromFixedLength(abStack_1a + lVar4,-(lVar4 + -1));
                    /* try { // try from 004d172e to 004d1741 has its CatchHandler @ 004d1c21 */
  operator+((juce *)this,(byte *)"Discrete ",(String *)local_40);
  piVar7 = (int *)(local_40[0] + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar7);
      return;
    }
  }
  return;
}



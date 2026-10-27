// Function : drawCornerResizer
// Namespace: juce:LookAndFeel_V2
// Entry    : 001f63e0
// Prototype: undefined drawCornerResizer(undefined8 param_1, undefined8 param_2, undefined8 param_3_00, undefined8 param_4, Graphics * param_5, int param_6, int param_7)
// Body     : 001f63e0 - 001f66d9


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::LookAndFeel_V2::drawCornerResizer(juce::Graphics&, int, int, bool, bool) */

void __cdecl
juce::LookAndFeel_V2::drawCornerResizer
          (undefined8 param_1,undefined8 param_2,undefined8 param_3_00,undefined8 param_4,
          Graphics *param_5,int param_6,int param_7)

{
  float fVar1;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  float local_78;
  float fStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  undefined1 local_68 [16];
  float local_58;
  undefined4 uStack_54;
  float local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float local_38;
  undefined4 uStack_34;
  undefined1 local_28 [16];
  float local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_44 = (undefined4)((ulong)param_3_00 >> 0x20);
  uStack_54 = (undefined4)((ulong)param_2 >> 0x20);
  local_48 = (float)param_6;
  local_38 = (float)param_7;
  fVar1 = local_38;
  if (local_48 <= local_38) {
    fVar1 = local_48;
  }
  fVar1 = fVar1 * _DAT_005de430;
  local_58 = local_38 + DAT_005d9038;
  local_68 = ZEXT416((uint)(DAT_005d9038 + local_48));
  uStack_40 = in_XMM2_Dc;
  uStack_3c = in_XMM2_Dd;
  uStack_34 = uStack_54;
  Graphics::setColour(param_5,_ZN4juce7ColoursL9lightgreyE_75);
  local_78 = local_48 * 0.0;
  uStack_14 = uStack_44;
  uStack_10 = uStack_40;
  uStack_c = uStack_3c;
  fStack_6c = local_38 * 0.0;
  local_28 = ZEXT416((uint)fStack_6c);
  fStack_74 = local_58;
  uStack_70 = local_68._0_4_;
  local_18 = local_78;
  (**(code **)(**(long **)(param_5 + 8) + 0xf0))(fVar1,*(long **)(param_5 + 8),&local_78);
  Graphics::setColour(param_5,_ZN4juce7ColoursL8darkgreyE_31);
  local_78 = local_18 + fVar1;
  fStack_6c = (float)local_28._0_4_ + fVar1;
  fStack_74 = local_58;
  uStack_70 = local_68._0_4_;
  (**(code **)(**(long **)(param_5 + 8) + 0xf0))(*(long **)(param_5 + 8),&local_78);
  Graphics::setColour(param_5,_ZN4juce7ColoursL9lightgreyE_75);
  local_78 = local_48 * DAT_005d9088;
  uStack_14 = uStack_44;
  uStack_10 = uStack_40;
  uStack_c = uStack_3c;
  fStack_6c = DAT_005d9088 * local_38;
  local_28 = ZEXT416((uint)fStack_6c);
  fStack_74 = local_58;
  uStack_70 = local_68._0_4_;
  local_18 = local_78;
  (**(code **)(**(long **)(param_5 + 8) + 0xf0))(fVar1,*(long **)(param_5 + 8),&local_78);
  Graphics::setColour(param_5,_ZN4juce7ColoursL8darkgreyE_31);
  local_78 = local_18 + fVar1;
  fStack_6c = (float)local_28._0_4_ + fVar1;
  fStack_74 = local_58;
  uStack_70 = local_68._0_4_;
  (**(code **)(**(long **)(param_5 + 8) + 0xf0))(*(long **)(param_5 + 8),&local_78);
  Graphics::setColour(param_5,_ZN4juce7ColoursL9lightgreyE_75);
  local_78 = local_48 * DAT_005d98e8;
  uStack_14 = uStack_44;
  uStack_10 = uStack_40;
  uStack_c = uStack_3c;
  fStack_6c = DAT_005d98e8 * local_38;
  local_28 = ZEXT416((uint)fStack_6c);
  fStack_74 = local_58;
  uStack_70 = local_68._0_4_;
  local_18 = local_78;
  (**(code **)(**(long **)(param_5 + 8) + 0xf0))(fVar1,*(long **)(param_5 + 8),&local_78);
  Graphics::setColour(param_5,_ZN4juce7ColoursL8darkgreyE_31);
  local_78 = local_18 + fVar1;
  fStack_6c = (float)local_28._0_4_ + fVar1;
  fStack_74 = local_58;
  uStack_70 = local_68._0_4_;
  (**(code **)(**(long **)(param_5 + 8) + 0xf0))(*(long **)(param_5 + 8),&local_78);
  Graphics::setColour(param_5,_ZN4juce7ColoursL9lightgreyE_75);
  local_78 = local_48 * DAT_005de434;
  fStack_6c = local_38 * DAT_005de434;
  fStack_74 = local_58;
  uStack_70 = local_68._0_4_;
  local_48 = local_78;
  local_38 = fStack_6c;
  (**(code **)(**(long **)(param_5 + 8) + 0xf0))(fVar1,*(long **)(param_5 + 8),&local_78);
  Graphics::setColour(param_5,_ZN4juce7ColoursL8darkgreyE_31);
  local_78 = local_48 + fVar1;
  fStack_6c = local_38 + fVar1;
  fStack_74 = local_58;
  uStack_70 = local_68._0_4_;
  (**(code **)(**(long **)(param_5 + 8) + 0xf0))(*(long **)(param_5 + 8),&local_78);
  return;
}



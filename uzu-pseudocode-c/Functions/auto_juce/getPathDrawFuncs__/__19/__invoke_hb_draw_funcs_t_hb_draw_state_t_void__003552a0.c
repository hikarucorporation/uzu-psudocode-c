// Function : __invoke<hb_draw_funcs_t,hb_draw_state_t,void>
// Namespace: auto_juce:getPathDrawFuncs__:__19
// Entry    : 003552a0
// Prototype: undefined __invoke<hb_draw_funcs_t,hb_draw_state_t,void>(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, undefined8 param_7_00, Path * param_8)
// Body     : 003552a0 - 003552a7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* __invoke<hb_draw_funcs_t, hb_draw_state_t, void>(hb_draw_funcs_t*, void*, hb_draw_state_t*,
   float, float, float, float, float, float, void*) */

void __cdecl
auto_juce::getPathDrawFuncs()::$_19::__invoke<hb_draw_funcs_t,hb_draw_state_t,void>
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          undefined8 param_7_00,Path *param_8)

{
  juce::Path::cubicTo(param_1,param_2,param_3,param_4,param_5,param_6,param_8);
  return;
}



// Function : __invoke<hb_draw_funcs_t,hb_draw_state_t,void>
// Namespace: auto_juce:getPathDrawFuncs__:__17
// Entry    : 00355280
// Prototype: undefined __invoke<hb_draw_funcs_t,hb_draw_state_t,void>(float param_1, float param_2, undefined8 param_3, Path * param_4)
// Body     : 00355280 - 00355287


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* __invoke<hb_draw_funcs_t, hb_draw_state_t, void>(hb_draw_funcs_t*, void*, hb_draw_state_t*,
   float, float, void*) */

void __cdecl
auto_juce::getPathDrawFuncs()::$_17::__invoke<hb_draw_funcs_t,hb_draw_state_t,void>
          (float param_1,float param_2,undefined8 param_3,Path *param_4)

{
  juce::Path::lineTo(param_1,param_2,param_4);
  return;
}



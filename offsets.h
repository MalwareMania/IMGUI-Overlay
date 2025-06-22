

#include <Windows.h>
#include <iostream>
#include <vector>

namespace Offsets {

    namespace Memory {
        const uintptr_t dumpsetinsert = HyperionRebase(0xDA4E70);
        const uintptr_t BitMap        = HyperionRebase(0x298668);
        const uintptr_t whitelist     = HyperionRebase(0x297EC8);
    }

    namespace Lua {
        const uintptr_t LuaT_Eventnames     = REBASE(0x47403B0);
        const uintptr_t LuaT_Typenames      = REBASE(0x4740350);
        const uintptr_t LuaD_throw          = REBASE(0x26A1550);
        const uintptr_t LuaO_NilObject      = REBASE(0x4740458);
        const uintptr_t LuaH_DummyNode      = REBASE(0x473FB88);
        const uintptr_t DecryptLuaState     = REBASE(0xB4D320);
        const uintptr_t LuaVMLoad           = REBASE(0xB503A0);
        const uintptr_t Luau_Execute        = REBASE(0x26D4300);
        const uintptr_t VariantCastInt64    = REBASE(0x1526730);

        namespace UserData {
            const uintptr_t GlobalState         = 0x140;
            const uintptr_t DecryptState        = 0x88;
            const uintptr_t ScriptContext       = 0x3B0; 
            const uintptr_t ScriptInstance      = 0x50; 
            const uintptr_t DisableRequireLock  = 0x6E0; 
        }
    }

    namespace Flags {
        const uintptr_t CFG_PAGE_HASH_KEY         = 0x67AA0809;
        const uintptr_t CFG_VALIDATION_XOR        = 0xC6;

        namespace InternalFastFlags {
            const uintptr_t EnableLoadModule                 = REBASE(0x6007F08);
            const uintptr_t DebugCheckRenderThreading        = REBASE(0x6030E68);
            const uintptr_t RenderDebugCheckThreading2       = REBASE(0x605B230);
            const uintptr_t DisableCorescriptLoadstring      = REBASE(0x6007EE8);
            const uintptr_t LockViolationInstanceCrash       = REBASE(0x6014620);
            const uintptr_t LockViolationScriptCrash         = REBASE(0x6007C20);
            const uintptr_t LuaStepIntervalMsOverrideEnabled = REBASE(0x600A700);
        }
    }

    namespace TaskScheduler {
        const uintptr_t TaskDefer              = REBASE(0xFEFA00);
        const uintptr_t Task__Spawn            = REBASE(0xFEFD20);
        const uintptr_t RawScheduler           = REBASE(0x6884DC8);
        const uintptr_t TaskSchedulerTargetFps = REBASE(0x6394020);

        namespace Scheduler {
            const uintptr_t FpsCap   = 0x1B0;
            const uintptr_t JobStart = 0x1D0;
            const uintptr_t JobEnd   = 0x1D8;

            namespace Job {
                const uintptr_t Name     = 0x18;
                const uintptr_t TypeName = 0x150;

                const uintptr_t ScriptContextJob = 0x1F8;
            }
        }
    }

    namespace ScriptData {
        const uintptr_t LocalScriptEmbedded         = 0x1B0;
        const uintptr_t ModuleScriptEmbedded        = 0x158;
        const uintptr_t weak_thread_node            = 0x188;
        const uintptr_t weak_thread_ref             = 0x8;
        const uintptr_t weak_thread_ref_live        = 0x20;
        const uintptr_t weak_thread_ref_live_thread = 0x8;
    }

    namespace Input {
        const uintptr_t FireMouseClick        = REBASE(0x1CA01D0);
        const uintptr_t FireRightMouseClick   = REBASE(0x1CA0370);
        const uintptr_t FireMouseHoverEnter   = REBASE(0x1CA1770);
        const uintptr_t FireMouseHoverLeave   = REBASE(0x1CA1910);
        const uintptr_t FireTouchInterest     = REBASE(0x145F4D0);
    }

    namespace Signals {
        const uintptr_t isgameloadd     = REBASE(0x69B300);
        const uintptr_t SetFastFlag     = REBASE(0x3873090);
        const uintptr_t GetFastFlag     = REBASE(0x3872600);
        const uintptr_t Register        = REBASE(0x1F119A0);
        const uintptr_t CastArgs        = REBASE(0xBE0D60);
        const uintptr_t VariantCastInt  = REBASE(0x1526420);
        const uintptr_t VariantCastInt64= REBASE(0x1526730);
        const uintptr_t VariantCastFloat= REBASE(0x1526D70);
    }

    namespace InstanceData {
        const uintptr_t ClassDescriptor    = 0x18;
        const uintptr_t PropertyDescriptor = 0x3B8;
        const uintptr_t ClassName          = 0x8;
        const uintptr_t Name               = 0x78;
        const uintptr_t Children           = 0x80;
    }

    namespace DataModel {
        const uintptr_t AppdataInfo             = REBASE(0x67C2638);
        const uintptr_t FlogDataBank            = REBASE(0x5FF74A0);
        const uintptr_t FakeDataModelPointer    = REBASE(0x67C2958);
        constexpr uintptr_t FakeDataModelToDataModel = 0x1B8;

        constexpr uintptr_t PropertiesStart =      0x30;
        constexpr uintptr_t PropertiesEnd   =      0x38;
        constexpr uintptr_t Type            =      0x60;
        constexpr uintptr_t TypeGetSetDescriptor = 0x98;
        constexpr uintptr_t getVFtableFunc  =      0x10;

        constexpr uintptr_t GameLoaded      = 0x650;
        constexpr uintptr_t PlaceId         = 0x1A0;
        constexpr uintptr_t GameId          = 0x198;
        constexpr uintptr_t ModuleFlags     = 0x6DC;
        constexpr uintptr_t IsCoreScript    = 0x6E0;
        constexpr uintptr_t Children        = 0x80;
        constexpr uintptr_t ChildrenEnd     = 0x8;
        constexpr uintptr_t Name            = 0x78;
        constexpr uintptr_t ClassDescriptor = 0x18;
        constexpr uintptr_t PropDescriptor  = 0x3B8;
        constexpr uintptr_t ClassName       = 0x8;
        constexpr uintptr_t PrimitiveTouch  = 0x178;
        constexpr uintptr_t Overlap         = 0x1D0;
        constexpr uintptr_t Padding = 0x720;
        constexpr uintptr_t Instance = 0x1B8;
    }

    namespace System {
        const uintptr_t OpcodeLookupTable = REBASE(0x562a4f0);
        const uintptr_t GetCurrentThreadId = REBASE(0x3852E70);
        const uintptr_t GetContextObject = REBASE(0xDDFB10);
        const uintptr_t Print              = REBASE(0x15977E0);
        const uintptr_t GetGlobalState     = REBASE(0xDC7E20);
        const uintptr_t RequestCode        = REBASE(0x906AC0);
        const uintptr_t Impersonator       = REBASE(0x3743660);
        const uintptr_t GetIdentityStruct  = REBASE(0x38530A0);
        const uintptr_t IdentityPtr        = REBASE(0x63C9D48);
        const uintptr_t KTable             = REBASE(0x63940A0);
    }

    namespace ExtraSpace {
        const uintptr_t Identity     = 0x30;
        const uintptr_t Capabilities = 0x48;
    }
}

namespace External {

        namespace Camera {
            inline constexpr uintptr_t Camera              = 0x418;
            inline constexpr uintptr_t CameraSubject       = 0xF0;
            inline constexpr uintptr_t CameraMode          = 0x2C8;
            inline constexpr uintptr_t CameraType          = 0x160;
            inline constexpr uintptr_t CameraMinZoom       = 0x2C4;
            inline constexpr uintptr_t CameraMaxZoom       = 0x2C0;
            inline constexpr uintptr_t CameraPos           = 0x124;
            inline constexpr uintptr_t CameraRotation      = 0x100;
            inline constexpr uintptr_t FOV                 = 0x168;
            inline constexpr uintptr_t ViewportSize        = 0x300;
            inline constexpr uintptr_t viewmatrix          = 0x4D0;
        }

        namespace Player {
            inline constexpr uintptr_t LocalPlayer         = 0x128;
            inline constexpr uintptr_t UserId              = 0x278;
            inline constexpr uintptr_t DisplayName         = 0x118;
            inline constexpr uintptr_t CharacterAppearanceId = 0x268;
            inline constexpr uintptr_t Team                = 0x258;
            inline constexpr uintptr_t TeamColor           = 0xD8;
            inline constexpr uintptr_t Health              = 0x19C;
            inline constexpr uintptr_t MaxHealth           = 0x1BC;
        }

        namespace Character {
            inline constexpr uintptr_t Position            = 0x140;
            inline constexpr uintptr_t Rotation            = 0x124;
            inline constexpr uintptr_t Velocity            = 0x14C;
            inline constexpr uintptr_t WalkSpeed           = 0x1D8;
            inline constexpr uintptr_t WalkSpeedCheck      = 0x3B0;
            inline constexpr uintptr_t JumpPower           = 0x1B8;
            inline constexpr uintptr_t HipHeight           = 0x1A8;
            inline constexpr uintptr_t AutoJumpEnabled     = 0x1DF;
            inline constexpr uintptr_t Sit                 = 0x1DF;
            inline constexpr uintptr_t HumanoidState       = 0x860;
            inline constexpr uintptr_t HumanoidStateId     = 0x20;
            inline constexpr uintptr_t RigType             = 0x1D0;
            inline constexpr uintptr_t HumanoidDisplayName = 0xD8;
            inline constexpr uintptr_t EvaluateStateMachine = 0x1DF;
        }

        namespace Environment {
            inline constexpr uintptr_t Gravity             = 0x908;
            inline constexpr uintptr_t ClockTime           = 0x1B8;
            inline constexpr uintptr_t FogStart            = 0x13C;
            inline constexpr uintptr_t FogEnd              = 0x138;
            inline constexpr uintptr_t FogColor            = 0x104;
            inline constexpr uintptr_t OutdoorAmbient      = 0x110;
        }

        namespace UI {
            inline constexpr uintptr_t FramePositionOffsetX = 0x3AC;
            inline constexpr uintptr_t FramePositionOffsetY = 0x3B4;
            inline constexpr uintptr_t FramePositionX       = 0x3A8;
            inline constexpr uintptr_t FramePositionY       = 0x3B0;
            inline constexpr uintptr_t FrameSizeX           = 0x120;
            inline constexpr uintptr_t FrameSizeY           = 0x124;
            inline constexpr uintptr_t FrameRotation        = 0x190;
            inline constexpr uintptr_t MousePosition        = 0xF4;
            inline constexpr uintptr_t MouseSensitivity     = 0x683a3b4;
            inline constexpr uintptr_t NameDisplayDistance  = 0x2F4;
            inline constexpr uintptr_t HealthDisplayDistance = 0x2E8;
        }

        namespace ProximityPrompt {
            inline constexpr uintptr_t ActionText           = 0xD8;
            inline constexpr uintptr_t Enabled              = 0x14A;
            inline constexpr uintptr_t GamepadKeyCode       = 0x134;
            inline constexpr uintptr_t HoldDuration         = 0x138;
            inline constexpr uintptr_t MaxDistance          = 0x140;
            inline constexpr uintptr_t MaxObjectText        = 0xF8;
        }

        namespace Script {
            inline constexpr uintptr_t ScriptContext         = 0x3B0;
            inline constexpr uintptr_t LocalScriptByteCode   = 0x1B0;
            inline constexpr uintptr_t LocalScriptBytecodePointer = 0x10;
            inline constexpr uintptr_t LocalScriptHash       = 0x1C0;
            inline constexpr uintptr_t ModuleScriptByteCode  = 0x158;
            inline constexpr uintptr_t ModuleScriptBytecodePointer = 0x10;
            inline constexpr uintptr_t ModuleScriptHash      = 0x180;
            inline constexpr uintptr_t RequireBypass         = 0x6D8;
        }

        namespace Network {
            inline constexpr uintptr_t Ping                 = 0xD0;
        }

        namespace DataModel {
            inline constexpr uintptr_t GameId              = 0x198;
            inline constexpr uintptr_t PlaceId             = 0x1A0;
            inline constexpr uintptr_t GameLoaded          = 0x678;
            inline constexpr uintptr_t DataModelDeleterPointer = 0x67C2960;
            inline constexpr uintptr_t FakeDataModelPointer = 0x67C2958;
            inline constexpr uintptr_t FakeDataModelToDataModel = 0x1B8;
            inline constexpr uintptr_t DataModelPrimitiveCount = 0x400;
            inline constexpr uintptr_t DataModelToRenderView1 = 0x1D8;
            inline constexpr uintptr_t DataModelToRenderView2 = 0x8;
            inline constexpr uintptr_t DataModelToRenderView3 = 0x28;
        }

        namespace Rendering {
            inline constexpr uintptr_t VisualEnginePointer   = 0x6606128;
            inline constexpr uintptr_t VisualEngine          = 0x10;
            inline constexpr uintptr_t MoonTextureId         = 0x860;
            inline constexpr uintptr_t SunTextureId          = 0x978;
            inline constexpr uintptr_t StarCount             = 0x228;
            inline constexpr uintptr_t SkyboxBk              = 0x108;
            inline constexpr uintptr_t SkyboxDn              = 0x130;
            inline constexpr uintptr_t SkyboxFt              = 0x158;
            inline constexpr uintptr_t SkyboxLf              = 0x180;
            inline constexpr uintptr_t SkyboxRt              = 0x1A8;
            inline constexpr uintptr_t SkyboxUp              = 0x1D0;
            inline constexpr uintptr_t MeshPartColor3        = 0x1A8;
            inline constexpr uintptr_t Dimensions            = 0x740;
        }

        namespace Input {
            inline constexpr uintptr_t Anchored             = 0x311;
            inline constexpr uintptr_t CanCollide           = 0x313;
            inline constexpr uintptr_t CanTouch             = 0x314;
            inline constexpr uintptr_t Adornee              = 0xD8;
            inline constexpr uintptr_t Anchored             = 0x311;
        }

        namespace Component {
            inline constexpr uintptr_t MaterialType        = 0x2F0;
            inline constexpr uintptr_t SoundId             = 0xE0;
            inline constexpr uintptr_t ToolGripPosition    = 0x44C;
            inline constexpr uintptr_t DecalTexture        = 0x110;
        }

        namespace Attribute {
            inline constexpr uintptr_t AttributeList       = 0x130;
            inline constexpr uintptr_t AttributeToNext     = 0x70;
            inline constexpr uintptr_t AttributeToValue    = 0x30;
        }

        namespace TaskScheduler {
            inline constexpr uintptr_t JobsPointer         = 0x6884FA0;
            inline constexpr uintptr_t JobStart            = 0x1D0;
            inline constexpr uintptr_t JobEnd              = 0x1D8;
            inline constexpr uintptr_t JobId               = 0x140;
            inline constexpr uintptr_t Job_Name            = 0x18;
            inline constexpr uintptr_t TaskSchedulerMaxFPS = 0x1B0;
            inline constexpr uintptr_t TaskSchedulerPointer= 0x6884DC8;
        }

        namespace Security {
            inline constexpr uintptr_t WhitelistSetInsert   = 0xDA4E70;
            inline constexpr uintptr_t WhitelistedPages     = 0x297EC8;
            inline constexpr uintptr_t WhitelistedThreads   = 0x2983F0;
            inline constexpr uintptr_t WhitelistEncryption  = 0x67AA0809;
            inline constexpr uintptr_t WhitelistEncryption2 = 0xC6;
        }

        namespace Misc {
            inline constexpr uintptr_t OnDemandInstance    = 0x30;
            inline constexpr uintptr_t ClassDescriptor      = 0x18;
            inline constexpr uintptr_t Children             = 0x80;
            inline constexpr uintptr_t ChildrenEnd          = 0x8;
            inline constexpr uintptr_t Parent               = 0x50;
            inline constexpr uintptr_t Name                 = 0x78;
            inline constexpr uintptr_t Deleter              = 0x10;
            inline constexpr uintptr_t DeleterBack          = 0x18;
            inline constexpr uintptr_t Primitive             = 0x178;
            inline constexpr uintptr_t PrimitiveGravity      = 0x114;
            inline constexpr uintptr_t PrimitiveValidateValue= 0x6;
            inline constexpr uintptr_t PrimitivesPointer1    = 0x3A0;
            inline constexpr uintptr_t PrimitivesPointer2    = 0x200;
            inline constexpr uintptr_t Transparency          = 0xF8;
            inline constexpr uintptr_t Value                 = 0xD8;
            inline constexpr uintptr_t TagList               = 0x118;
        }
    }

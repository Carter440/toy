
#pragma once

#if !defined MUD_MODULES || defined MUD_OBJ_LIB
#include <refl/Module.h>
#endif

#ifndef MUD_MODULES
#include <meta/infra/Module.h>
#include <meta/obj/Module.h>
#include <meta/pool/Module.h>
#include <meta/refl/Module.h>
#include <meta/proto/Module.h>
#include <meta/tree/Module.h>
#include <meta/srlz/Module.h>
#include <meta/math/Module.h>
#include <meta/geom/Module.h>
#include <meta/procgen/Module.h>
#include <meta/lang/Module.h>
#include <meta/ctx/Module.h>
#include <meta/ui/Module.h>
#include <meta/uio/Module.h>
#include <meta/snd/Module.h>
#include <meta/ctx-glfw/Module.h>
#include <meta/ui-vg/Module.h>
#include <meta/bgfx/Module.h>
#include <meta/gfx/Module.h>
#include <meta/gfx-pbr/Module.h>
#include <meta/gfx-obj/Module.h>
#include <meta/gfx-gltf/Module.h>
#include <meta/gfx-ui/Module.h>
#include <meta/tool/Module.h>
#include <meta/procgen-gfx/Module.h>
#include <meta/util/Module.h>
#include <meta/core/Module.h>
#include <meta/visu/Module.h>
#include <meta/edit/Module.h>
#include <meta/block/Module.h>
#include <meta/shell/Module.h>
#endif
        
#include <space/Forward.h>
#include <space/Types.h>
#include <space/Api.h>

#include <meta/space/Convert.h>

#ifndef _SPACE_REFL_EXPORT
#define _SPACE_REFL_EXPORT MUD_IMPORT
#endif

	export_ class _SPACE_REFL_EXPORT _space : public Module
	{
	private:
		_space();

	public:
		static _space& m() { static _space instance; return instance; }
	};

#ifdef _SPACE_MODULE
extern "C"
_SPACE_REFL_EXPORT Module& getModule();
#endif

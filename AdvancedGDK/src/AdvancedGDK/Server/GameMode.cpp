#include "stdafx.h" // PCH

// Custom includes:
#include <AdvancedGDK/Server/GameMode.hpp>

namespace agdk
{
	////////////////////////////////////////////////////////////
	IGameMode::IGameMode()
		: playerPoolAgent{players}
	{
	}

	////////////////////////////////////////////////////////////
	IGameMode::~IGameMode()
	{
	}
}

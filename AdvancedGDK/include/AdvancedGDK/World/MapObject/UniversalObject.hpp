#pragma once

#include ADVANCEDGDK_PCH

#include "PerPlayerObject.hpp"

namespace agdk
{

/// <summary>
/// Class for every object that is visible for every player, but is streamed, not global.
/// </summary>
/// <seealso cref="PerPlayerObject" />
class UniversalObject
	: public PerPlayerObject
{
public:	
	/// <summary>
	/// Finalizes an instance of the <see cref="UniversalObject"/> class.
	/// </summary>
	virtual ~UniversalObject();

	/// <summary>
	/// Sets the object model.
	/// </summary>
	/// <param name="modelIndex_">Index of the model.</param>
	virtual void setModel(std::int32_t const modelIndex_) override;

	/// <summary>
	/// Sets the object location.
	/// </summary>
	/// <param name="location_">The location.</param>
	virtual void setLocation(math::Vector3f const & location_) override;

	/// <summary>
	/// Sets the object rotation.
	/// </summary>
	/// <param name="rotationAxes_">The rotation axes.</param>
	virtual void setRotation(math::Vector3f const & rotationAxes_) override;

private:

	/// <summary>
	/// Applies the text.
	/// </summary>
	/// <param name="materialIndex_">Index of the material.</param>
	/// <param name="textMaterial_">The text material.</param>
	/// <param name="player_">The player.</param>
	virtual void applyText(std::size_t const materialIndex_, Text const & textMaterial_, const Player * player_ = nullptr) override;
	
	/// <summary>
	/// Applies the texture.
	/// </summary>
	/// <param name="materialIndex_">Index of the material.</param>
	/// <param name="textureMaterial_">The texture material.</param>
	/// <param name="player_">The player.</param>
	virtual void applyTexture(std::size_t const materialIndex_, Texture const & textureMaterial_, const Player * player_ = nullptr) override;
	
	/// <summary>
	/// Returns the distance squared to specified player.
	/// </summary>
	/// <param name="player_">The player.</param>
	/// <returns></returns>
	virtual math::Meters getDistanceSquaredTo(Player const & player_) const override;
	
	/// <summary>
	/// Spawns the object to the specified player.
	/// </summary>
	/// <param name="player_">The player.</param>
	/// <returns>
	///		<c>true</c> if successfully spawned; otherwise <c>false</c>.
	/// </returns>
	virtual bool spawn(Player const & player_) override;
	
	/// <summary>
	/// Despawns the object of the specified player.
	/// </summary>
	/// <param name="player_">The player.</param>
	virtual void despawn(Player const & player_) override;
	
	/// <summary>
	/// Returns the object location for specified player.
	/// </summary>
	/// <param name="player_">The player.</param>
	/// <returns>
	/// The object location for specified player.
	/// </returns>
	virtual math::Vector3f getLocationFor(Player const & player_) const override;

	/// <summary>
	/// Returns the object rotation for specified player.
	/// </summary>
	/// <param name="player_">The player.</param>
	/// <returns>
	/// The object rotation for specified player.
	/// </returns>
	virtual math::Vector3f getRotationFor(Player const & player_) const override;

protected:
	std::vector< std::pair<Player const*, std::int32_t> > m_playerHandles;
};


}
#include <Geode/Geode.hpp>
#include <Geode/modify/GameObject.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(GameObject) 
{
	void setVisible(bool v)
	{
		if (m_objectType == GameObjectType::Decoration && m_objectID != 44) { // 44 being practice mode checkpoint, because thats a "decoration"
            GameObject::setVisible(false);
        } else {
            GameObject::setVisible(true);
        }
	}

	void setOpacity(char opacity)
	{
		GameObject::setOpacity(255);
	}

	
};

class $modify(PlayLayer)
{
	void addObject(GameObject* obj)
	{
		obj->m_activeMainColorID = -1;
		obj->m_isHide = false;

		PlayLayer::addObject(obj);
	}
};

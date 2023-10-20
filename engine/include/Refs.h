#pragma once
/**
 * @brief Represents a reference to a body in the world.
 * @note It consists of an index and a generation index.
 */
struct BodyRef {
    std::size_t Index;
    std::size_t GenIndex;

    /**
     * @brief Check if two BodyRef instances are equal.
     * @param other The BodyRef to compare with.
     * @return true if the BodyRefs are equal, false otherwise.
     */
    constexpr bool operator==(const BodyRef &other) const {
        return (Index == other.Index) && (GenIndex == other.GenIndex);
    }
};

/**
 * @brief Represents a reference to a collider in the world.
 * @note It consists of an index and a generation index.
 */
struct ColliderRef {
    std::size_t Index;
    std::size_t GenIndex;

    /**
     * @brief Check if two ColliderRef instances are equal.
     * @param other The ColliderRef to compare with.
     * @return true if the ColliderRefs are equal, false otherwise.
     */
    constexpr bool operator==(const BodyRef &other) const {
        return (Index == other.Index) && (GenIndex == other.GenIndex);
    }
};
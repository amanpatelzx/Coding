import { Audio } from "react-loader-spinner";
import "./Loader.css";

function Loader() {
  return (
    <div id="Loader">
      <Audio
        height="80"
        width="80"
        color="#4fa94d"
        ariaLabel="audio-loading"
        visible={true}
      />
    </div>
  );
}

export default Loader;